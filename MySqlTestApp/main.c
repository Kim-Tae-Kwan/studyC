/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / MySQL���� �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <my_global.h>
#include <WinSock2.h>
#include <mysql.h>

#define MYSQLUSER "root"
#define MYSQLPASSWARD "mysql_p@ssw0rd"
#define MYSQLIP "localhost"
void loadmysql(char mysqlip[], MYSQL* cons);

// �����Լ�
int main(void)
{
	MYSQL* cons = mysql_init(NULL);
	MYSQL_RES* res;
	MYSQL_ROW row;
	int fields;

	loadmysql(MYSQLIP, cons);
	printf("\n");
	mysql_query(cons, "use shopdb;");
	mysql_query(cons, "SELECT * FROM membertbl;");
	res = mysql_store_result(cons);
	fields = mysql_num_fields(res);

	while (row = mysql_fetch_row(res))
	{	//�� ������ �Ѹ��� ���� ����
		for (int i = 0; i < fields; i++)
		{
			printf("%s", row[i]);
			if (i < fields) printf("\t");
		}
		printf("\n");
	}

	//mysql_query(cons, "DELETE FROM membertbl WHERE memberID = 'kim';");

	mysql_free_result(res);
	mysql_close(cons);

	system("pause");
	return EXIT_SUCCESS;
}

void loadmysql(char mysqlip[], MYSQL* cons)
{
	if (cons == NULL)//cons�� �ʱ�ȭ�� ��������
	{
		fprintf(stderr, "%s\n", mysql_error(cons));//���� ����Ʈ, printf("%s")�� ����.
		Sleep(1000);
		exit(EXIT_FAILURE);
	}
	if (mysql_real_connect(cons, mysqlip, MYSQLUSER, MYSQLPASSWARD, NULL, 0, NULL, 0) != NULL)
	{//mysql������ ���� �����ϸ� 0 �ƴϸ� �ٸ��� ��ȯ

		fprintf(stderr, "���Ӽ���\n");
		mysql_set_character_set(cons, "euckr");//Mysql ���ڸ� �����Ѵ�. ���� ���ϸ� �ѱ��� ©��.

	}
	else
	{
		fprintf(stderr, "���� ���� : %s\n", mysql_error(cons));
		getchar();
	}


}