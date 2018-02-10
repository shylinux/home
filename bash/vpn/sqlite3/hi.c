#include <stdio.h>
#include "sqlite3.h"

int callback(void *data, int count, char **value, char **name)
{
	int i;

	printf("\n");
	for (i = 0; i < count; i++) {
		printf("%s: %s\n", name[i], value[i]);
	}
}

int main(int argc, const char *argv[])
{
	int rc;
	sqlite3 *db;
	char *sql;

	rc = sqlite3_open("hi.db", &db);
	printf("open database hi.db success\n");

	sql = "create table stu(name text, age int)";
	rc = sqlite3_exec(db, sql, NULL, NULL, NULL);
	printf("create table stu success\n");

	sql = "insert into stu(name, age) values('shy', 26)";
	rc = sqlite3_exec(db, sql, NULL, NULL, NULL);
	printf("insert into stu success\n");

	sql = "insert into stu(name, age) values('shy', 27)";
	rc = sqlite3_exec(db, sql, NULL, NULL, NULL);
	printf("insert into stu success\n");

	sql = "insert into stu(name, age) values('shy', 28)";
	rc = sqlite3_exec(db, sql, NULL, NULL, NULL);
	printf("insert into stu success\n");

	sql = "select name, age from stu";
	rc = sqlite3_exec(db, sql, callback, NULL, NULL);
	printf("\n");

	char **result;
	int nrow, ncol;
	int i, j;

	sql = "select name, age from stu";
	rc = sqlite3_get_table(db, sql, &result, &nrow, &ncol, NULL);
	for (i = 0; i < nrow + 1; i++) {
		for (j = 0; j < ncol; j++) {
			printf("%s\t", result[i*ncol+j]);
		}
		printf("\n");
	}
	printf("\n");
	sqlite3_free_table(result);

	sqlite3_stmt *stmt;
	sql = "insert into stu(name, age) values(?, ?)";
	rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
	rc = sqlite3_bind_text(stmt, 1, "shy", 3, NULL);
	rc = sqlite3_bind_int(stmt, 2, 30);
	rc = sqlite3_step(stmt);

	rc = sqlite3_reset(stmt);
	rc = sqlite3_bind_text(stmt, 1, "shy", 3, NULL);
	rc = sqlite3_bind_int(stmt, 2, 32);
	rc = sqlite3_step(stmt);

	sqlite3_finalize(stmt);

	sql = "select name, age from stu";
	rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
	while (sqlite3_step(stmt) == SQLITE_ROW) {
		for (i = 0; i < sqlite3_column_count(stmt); i++) {
			printf("%s: %s\n", sqlite3_column_name(stmt, i), sqlite3_column_text(stmt, i));
		}
	}
	sqlite3_finalize(stmt);

	sqlite3_close(db);
	printf("close database hi.db success\n");

	return 0;
}

