/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 메모리 동적 할당 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{ 
    /*int* pi;
    int sum=0;

    pi = (int*)malloc(5*sizeof(int));
    if (pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    printf("다섯명의 이름을 입력하세요. : ");
    for (int i=0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
    

    free(pi);*/
    //char* pi;
    //int size = 5;
    //int count = 0;
    //int i;
    //char num=0;

    //pi = (char*)calloc(size, sizeof(char));
    //while (1)
    //{
    //    printf("양수만 입력하세요 => ");
    //    scanf("%s", num);
    //    //if (num <= 0) break;
    //    if (count == size)
    //    {
    //        size += 5;
    //        pi = (int*)realloc(pi, size * sizeof(int));
    //    }
    //    pi[count++] = num;
    //    printf("%s\n", pi);
    //}
    //for (i = 0; i < count; i++)
    //{
    //    printf("%5d", pi[i]);
    //}
    //printf("\n");
    //free(pi);
	system("pause");
	return EXIT_SUCCESS;
}