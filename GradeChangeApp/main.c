/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int number(int a);
void number_grade(int a);
// �����Լ�
int main(void)
{
	int a = 0;

	while (1)
	{
		a = number(a);
		if (a == 1) continue;
		number_grade(a);
	}


	system("pause");
	return EXIT_SUCCESS;
}
int number(int a)
{
	printf("������ �Է� �ϼ��� : ");
	scanf("%d", &a);
	if (a > 100 && a<0)
	{
		printf("100���� �ʰ��Ͽ����ϴ�.\n");
		return 1;
	}
	else if (40 <= a && a <= 49)
	{
		printf("������ �ùٸ��� �ʽ��ϴ�.\n");
		return 1;
	}

	return a;
}

void number_grade(int a) {
	char grade = NULL;

	if (90 <= a && a <= 100)
		grade = 'A';
	else if (70 <= a && a <= 89)
		grade = 'B';
	else if (60 <= a && a <= 79)
		grade = 'C';
	else if (50 <= a && a <= 59)
		grade = 'D';
	else if (0 <= a && a <= 39)
		grade = 'F';

	printf("���� : %c\n", grade);
}