/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���ڿ� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(char a,char b);
// �����Լ�
int main(void)
{
	/*int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	getchar();

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);*/

	/*char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);*/


	/*char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);*/

	/*char str[80] = "apple";

	strcat(str, "pie");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);*/

	/*char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("�̸��� �� ���� : %s\n", resp);*/
	int res=0;
	
	while (1)
	{
		char str1[80];
		char str2[80];

		res=cmp(str1,str2);
		if (res == 1)
			break;
		

	}
	system("pause");
	return EXIT_SUCCESS;
}

int cmp(char a[],char b[])
{
	

	printf("2���� ���� �̸� : ");
	scanf("%s%s", a, b);

	if (a[0] == 'X' || b[0] == 'X')
		return 1;

	printf("������ ���� ������ ���� : ");
	if (strcmp(a, b) < 0)
		printf("%s\n", a);
	else
		printf("%s\n", b);

	return 0;
}