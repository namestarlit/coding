#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

/**
 * struct Address - Address data structure
 * @id: person's ID
 * @set: boolen value of whether Address is set or not
 * @name: person's name
 * @email: person's email
 */
struct Address
{
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA];
};

/**
 * struct Database - Database data structure
 * @rows: rows of the database
 */
struct Database
{
	struct Address rows[MAX_ROWS];
};

/**
 * struct Connection - Connection data structure
 * @file: pointer to a file.
 * @db: pointer to a database
 */
struct Connection
{
	FILE *file;
	struct Database *db;
};

/**
 * die - terminates the program
 * @message: error message
 */
void die(const char *message)
{
	if (errno)
		perror(message);
	else
		printf("ERROR: %s\n", message);
	exit(1);
}

/**
 * address_print - prints database columns
 * @addr: pointer to Address data structure
 */
void address_print(struct Address *addr)
{
	printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

/**
 * database_load - function to read database data into a database file.
 * @conn: pointer to Connection data structure.
 */
void database_load(struct Connection *conn)
{
	int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);

	if (rc != 1)
		die("Failed to load database.");
}

/**
 * database_open - opens a database file.
 * @filename: pointer to file descriptor
 * @mode: mode of the file ('w', "r+")
 *
 * Return: pointer to database connection.
 */
struct Connection *database_open(const char *filename, char mode)
{
	struct Connection *conn = malloc(sizeof(struct Connection));

	if (!conn)
		die("Memory error");

	conn->db = malloc(sizeof(struct Database));

	if (!conn->db)
		die("Memory error");

	if (mode == 'c')
	{
		conn->file = fopen(filename, "w");
	}
	else
	{
		conn->file = fopen(filename, "r+");

		if (conn->file)
			database_load(conn);
	}

	if (!conn->file)
		die("Failed to open the file");

	return (conn);
}

/**
 * database_close - closes a database
 * @conn: pointer to database connection
 */
void database_close(struct Connection *conn)
{
	if (conn)
	{
		if (conn->file)
			fclose(conn->file);
		if (conn->db)
			free(conn->db);
		free(conn);
	}
}

/**
 * database_write - writes data to a database.
 * @conn: pointer to database connection
 */
void database_write(struct Connection *conn)
{
	rewind(conn->file);

	int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);

	if (rc != 1)
		die("Failed to write database.");

	rc = fflush(conn->file);
	if (rc == -1)
		die("Cannot flush database.");
}

/**
 * database_create - creates a database
 * @conn: pointer to database connection.
 */
void database_create(struct Connection *conn)
{
	int i = 0;

	for (i = 0; i < MAX_ROWS; i++)
	{
		/* make a prototype to initialize it */
		struct Address addr = {.id = i, .set = 0};
		/* then just assign it */
		conn->db->rows[i] = addr;
	}
}

/**
 * database_set - sets a database
 * @conn: pointer to database connection
 * @id: person's ID
 * @name: person's name
 * @email: person's email
 */
void database_set(struct Connection *conn, int id,
		const char *name, const char *email)
{
	struct Address *addr = &conn->db->rows[id];

	if (addr->set)
		die("Already set, delete it first.");

	addr->set = 1;
	/* WARNING: Bug, read about strncpy (man strncpy) */
	char *res = strncpy(addr->name, name, MAX_DATA);

	if (!res)
		die("Name copy failed");

	res = strncpy(addr->email, email, MAX_DATA);
	if (!res)
		die("Email copy failed");
}

/**
 * database_get - retrives data based on person's id
 * @conn: pointer to database connection
 * @id: person's id
 */
void database_get(struct Connection *conn, int id)
{
	struct Address *addr = &conn->db->rows[id];

	if (addr->set)
		address_print(addr);
	else
		die("ID is not set.");
}

/**
 * database_delete - deletes a record in a database
 * @conn: pointer to database connection
 * @id: person's id
 */
void database_delete(struct Connection *conn, int id)
{
	struct Address addr = {.id = id, .set = 0};

	conn->db->rows[id] = addr;
}

/**
 * database_list - lists rows of a database
 * @conn: pointer to database connection
 */
void database_list(struct Connection *conn)
{
	int i = 0;
	struct Database *db = conn->db;

	for (i = 0; i < MAX_ROWS; i++)
	{
		struct Address *cur = &db->rows[i];

		if (cur->set)
			address_print(cur);
	}
}

/**
 * main - database system
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
		die("USAGE: ex17 <dbfile> <action> [action parameters]");

	char *filename = argv[1];
	char action = argv[2][0];
	struct Connection *conn = database_open(filename, action);
	int id = 0;

	if (argc > 3)
		id = atoi(argv[3]);
	if (id > MAX_ROWS)
		die("There are not that many records.");

	switch (action)
	{
		case 'c':
			database_create(conn);
			database_write(conn);
			break;
		case 'g':
			if (argc != 4)
				die("Need an id to get data.");
			database_get(conn, id);
			break;
		case 's':
			if (argc != 6)
				die("Need id, name and email to set record");
			database_set(conn, id, argv[4], argv[5]);
			database_write(conn);
			break;
		case 'd':
			if (argc != 4)
				die("Need an id to delete data.");
			database_delete(conn, id);
			database_write(conn);
			break;
		case 'l':
			database_list(conn);
			break;
		default:
			die("Invalid action, \
					only: c=create, g=get, s=set, \
					d=delete, l=list");
	}

	return (0);
}
