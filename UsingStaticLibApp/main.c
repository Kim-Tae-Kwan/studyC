/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 라이브러리 사용.
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include "cal.h"

// 메인함수
int main(void) 
{

    printf("┌────────────────┐\n");
    printf("│ 정적 라이브러리│ \n");
    printf("└────────────────┘\n");

    int data[] = { 10,20,30,40,50,60,70,80,90,100 };
    int res = get_total(data, sizeof(data)/sizeof(data[0]));

    printf("Result is %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}