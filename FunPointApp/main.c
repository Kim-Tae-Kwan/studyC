/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / �Լ� ����Ʈ.
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b);
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int m_ax(int a, int b);


// �����Լ�
int main(void)
{
	/*printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n\n");
	while (1)
	{
		int sel;
		printf("���ϴ� ������ �����ϼ��� : ");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1: func(sum); break;

		case 2: func(mul); break;

		case 3: func(m_ax); break;
		}
		printf("\n");

	}*/

	double b = 3.5;
	int a = 10;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	printf("b : %.1lf\n", *(double*)vp);
	vp = &b;

	system("pause");
	return EXIT_SUCCESS;
}
int sum(int a, int b)
{
	return(a + b);
}
void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� :");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�ᱣ���� : %d\n", res);
}



int mul(int a, int b)
{
	return(a * b);
}

int m_ax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;

}