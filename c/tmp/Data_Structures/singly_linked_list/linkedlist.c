#include "linkedlist.h"

/**
 * main - working with linked lists
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int option;

	do 
	{
		puts("\n\n****** MAIN MENU ******");
		puts("1: Create a Linked list");
		puts("2: Display the list");
		puts("3: Add a node at the beggining");
		puts("4: Add a node at the end");
		puts("5: Add a node before a given node");
		puts("6: Add a node after a given node");
		puts("7: Delete a node from the beggining");
		puts("8: Delete a node from the end");
		puts("9: Delete a given node");
		puts("10: Delete a node after a given node");
		puts("11: Delete the entire linked list");
		puts("12: Sort the list");
		puts("13: EXIT");

		printf("\nEnter the option: ");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1:
				start = create_ll(start);
				puts("LINKED LIST CREATED");
				break;
			case 2:
				start = display(start);
				break;
			case 3:
				start = insert_beg(start);
				break;
			case 4:
				start = insert_end(start);
				break;
			case 5:
				start = insert_before(start);
				break;
			case 6:
				start = insert_after(start);
				break;
			case 7:
				start = delete_beg(start);
				break;
			case 8:
				start = delete_end(start);
				break;
			case 9:
				start = delete_node(start);
				break;
			case 10:
				start = delete_after(start);
				break;
			case 11:
				start = delete_list(start);
				puts("LINKED LIST DELETED");
				break;
			case 12:
				start = sort_list(start);
				break;
			case 13:
				puts("Exiting...");
		}
	}while(option != 13);

	getchar();

	return (0);
}

struct node *create_ll(struct node *start)
{
	struct node *new_node, *ptr;
	int num;

	puts("Enter -1 to end"); /* -1 means NULL */
	printf("Enter the data: ");
	scanf("%d", &num);

	while (num != -1)
	{
		/* allocate memory for new_node */
		new_node = (struct node *)malloc(sizeof(struct node));
		/*assign data to num */
		new_node->data = num;

		if (start == NULL)
		{
			new_node->next = NULL;
			start = new_node;
		}
		else
		{
			ptr = start;
			
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
				ptr->next = new_node;
				new_node->next = NULL;
			}
		}
		return (start);
	}
	return (start);
}

struct node *display(struct node *start)
{
	struct node *ptr;
	ptr = start;

	while (ptr != NULL)
	{
		printf("\t%d", ptr->data);
		ptr = ptr->next;
	}
	return (start);
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;

	printf("\nEnter the data: ");
	scanf("%d", &num);

	/*allocate memory for new_node */
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	
	new_node->next = start;
	start = new_node;

	return (start);
}

struct node *insert_end(struct node *start)
{
	struct node *new_node, *ptr;
	int num;

	printf("\nEnter the data: ");
	scanf("%d", &num);

	/* allocate memory for new_node */
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	new_node->next = NULL;

	ptr = start;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		ptr->next = new_node;
	}
	return (start);
}

struct node *insert_before(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num, val;

	printf("\nEnter the data: ");
	scanf("%d", &num);
	printf("\nEnter the value before which thee data has to be inserted: ");
	scanf("%d", &val);

	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	
	ptr = start;

	while (ptr->data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = new_node;
	new_node->next = ptr;

	return (start);
}

struct node *insert_after(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num, val;

	printf("\nEnter the data: ");
	scanf("%d", &num);
	printf("\nEnter the value after which the data has to be inserted: ");
	scanf("%d", &val);

	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	ptr = start;
	preptr = ptr;

	while (preptr->data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = new_node;
	new_node->next = ptr;

	return (start);
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	start = start->next;
	free(ptr);

	return (start);
}

struct node *delete_end(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;

	while (ptr->next != NULL)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = NULL;
	free(ptr);

	return (start);
}

struct node *delete_node(struct node *start)
{
	struct node *ptr, *preptr;
	int val;

	printf("\nEnter the value of the node which has to be deleted: ");
	scanf("%d", &val);

	ptr = start;

	if (ptr->data == val)
	{
		delete_beg(start);
		return (start);
	}
	else
	{
		while (ptr->data != val)
		{
			preptr = ptr;
			ptr = ptr->next;
		}
		preptr->next = ptr->next;
		free(ptr);

		return (start);
	}
}

struct node *delete_after(struct node *start)
{
	struct node *ptr, *preptr;
	int val;

	printf("\nEnter the value after which the node has to be deleted: ");
	scanf("%d", &val);

	ptr = start;
	preptr = ptr;

	while (preptr->data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);

	return (start);
}

struct node *delete_list(struct node *start)
{
	struct node *ptr;

	if (start != NULL)
	{
		ptr = start;

		while (ptr != NULL)
		{
			printf("\n%d is to be deleted next", ptr->data);
			start = delete_beg(ptr);
			ptr = start;
		}
	}

	return (start);
}

struct node *sort_list(struct node *start)
{
	struct node *ptr1, *ptr2;
	int tmp;

	ptr1 = start;

	while (ptr1->next != NULL)
	{
		ptr2 = ptr1->next;
		while (ptr2 != NULL)
		{
			if (ptr1->data > ptr2->data)
			{
				tmp = ptr1->data;
				ptr1->data = ptr2->data;
				ptr2->data = tmp;
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}

	return (start);
}
