/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 전치리 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

// 메인함수
int main(void)
{
	/* Student aa = { 345,"홍길동" };

	 printf("학번 : %d, 이름 : %s %d\n", aa.num, aa.name);*/

	/*double radius, area;

	printf("반지름을 입력하세요(10이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else
	{
		printf("원의 면적 : %.2lf(%s)\n", area, MSG);
	}*/

	/*int a = 10, b = 20;
	double x = 1.2, y = 0.3;
	int res;

	
	printf("a+b : %d\n", SUM(a, b));
	printf("x+y : %.1lf\n", SUM(x, a));
	res = 30 / MUL(x, y);

	
	printf("30/(2*5) : %d\n", res);*/

	/*int a1, a2;

	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 20;
	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);*/

	int max;

#if VER >=6
	printf("버전 %d입니다.\n", VER);
#endif // VER >=6

#if BIT ==16
	max = 32767;
#else
	max = 2147483647;
#endif // BIT ==16

	printf("int형 변수의 최댓값 : %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}

