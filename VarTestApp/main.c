/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 변수의 영역
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assign();

// 메인함수
int main(void)
{
	/*int a = 10,b=20;
	printf("교환 전 a,b : %d %d\n", a, b);

	{
		int temp;

		temp = a;
		a = b;
		b = temp;

	}


	printf("교환 후 a,b : %d %d\n", a,b);*/

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


	printf("assign 함수 a : %d\n", a++);
}