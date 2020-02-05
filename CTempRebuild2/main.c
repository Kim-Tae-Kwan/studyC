/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    char ary[100][80];
   // scanf("%s", ary[0][80]);

    printf("%d %d\n", sizeof(ary), sizeof(ary[0]));

	
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}