/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 선택 정렬 알고리즘 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    int a[5];
    int i, j, temp;


    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    




    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}