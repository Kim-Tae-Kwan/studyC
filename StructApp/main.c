/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����� ���� ������Struct �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile
{
	char name[80];
	int age;
	double height;
	char* intro;

};

struct student
{
	struct profile pf;
	int id;
	double grade;

};
// �����Լ�
int main(void)
{
	struct student tk;

	strcpy(tk.pf.name, "kim");
	tk.pf.age = 27;
	tk.pf.height = 175.5;
	tk.grade = 2.5;
	tk.id = 20133039;

	tk.pf.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(tk.pf.intro);

	printf("�̸� : %s\n", tk.pf.name);
	printf("���� : %d\n", tk.pf.age);
	printf("Ű   : %.1lf\n", tk.pf.height);
	printf("�ڱ�Ұ� : %s\n", tk.pf.intro);
	printf("�й� : %d\n", tk.id);
	printf("���� : %.1lf\n", tk.grade);
	free(tk.pf.intro);

	system("pause");
	return EXIT_SUCCESS;
}