#ifndef _DB_H_
#define _DB_H_

#define DB_FILE "/usr/local/.devpkg/db"
#define DB_DIR "/usr/local/.devpkg"

int db_init(void);
int db_list(void);
int db_update(const char *url);
int db_find(const char *url);

#endif /* _DB_H_ */
