/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 2차원 배열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>


// 메인함수
int main(void)
{
    char score[5][20];

    int i;
    int count=0;

    count = sizeof(score) / sizeof(score[0]);

    printf("%d %d\n", sizeof(score), sizeof(score[0]));

    for (i = 0; i < count; i++)
    {
        scanf("%s", score[i]);
    }

    for (i = 0; i < count; i++)
    {
        printf("%s", score[i]);
    }
    printf("\n");

    system("pause");
    return EXIT_SUCCESS;
}