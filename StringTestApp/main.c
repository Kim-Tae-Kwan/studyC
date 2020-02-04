/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 문자 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    char small, cap = 'H';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("대문자 : %c %c", cap, '\n');
    printf("소문자 : %c\n", small);






	system("pause");
	return EXIT_SUCCESS;
}