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
void print_ary(int*pa, int size);
// 메인함수
int main(void) 
{
    int ary[] = { 10,20,30,40,50 };
    int ary2[]= { 10,20,30,40,50,60,70 };
    int size = sizeof(ary) / sizeof(ary[0]);




    print_ary(ary,size);
    print_ary(ary2, 7);

	system("pause");
	return EXIT_SUCCESS;
}

void print_ary(int* pa,int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%5d", pa[i]);
    }
    printf("\n");
}