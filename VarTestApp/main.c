/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assign();

// �����Լ�
int main(void)
{
	/*int a = 10,b=20;
	printf("��ȯ �� a,b : %d %d\n", a, b);

	{
		int temp;

		temp = a;
		a = b;
		b = temp;

	}


	printf("��ȯ �� a,b : %d %d\n", a,b);*/

	/*register int i;
	int sum = 0;

	for (i = 0; i < 10000; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);*/

	/*int i;
	for (i = 1; i < 6; i++)
	{
		assign();
	}*/







	system("pause");
	return EXIT_SUCCESS;
}
void assign()
{
	static int a = 0;
	int i;


	printf("assign �Լ� a : %d\n", a++);
}