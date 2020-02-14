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
    int total=0;
    for (int i = 0; i <= 300; i++)
    {
        if (i % 3 == 0)
        {
            total += i;
        }
    }
    printf("총합 : %d\n", total);



	system("pause");
	return EXIT_SUCCESS;
}