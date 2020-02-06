/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 함수 포인트.
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


// 메인함수
int main(void)
{
	/*printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n\n");
	while (1)
	{
		int sel;
		printf("원하는 연산을 선택하세요 : ");
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

	printf("두 정수의 값을 입력하세요 :");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결괏값은 : %d\n", res);
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