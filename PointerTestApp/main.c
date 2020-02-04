/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 포인터 공부
  --------------------------------------------------------------------------------
  first created - 2020.02.04 
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("ch size : %d\n", sizeof(&ch));
    printf("in size : %u\n", sizeof(&in));
    printf("db size : %u\n", sizeof(&db));
 
    printf("pc size : %u\n", sizeof(pc));
    printf("pi size : %u\n", sizeof(pi));
    printf("pd size : %u\n", sizeof(pd));
    

	
	system("pause");
	return EXIT_SUCCESS;
}

