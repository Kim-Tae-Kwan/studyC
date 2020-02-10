/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    FILE* fp;
    int age;
    char name[20];
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("파일이 열리지 못 하였습니다.\n");
        return 1;
    }
    fscanf(fp, "%d", &age);

    if(fgetc(fp)=='\n'){}

    fgets(name, sizeof(name), fp);
    printf("나이 : %d, 이름 : %s\n", age, name);
    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}