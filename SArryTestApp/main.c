/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / 2���� �迭 �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>


// �����Լ�
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