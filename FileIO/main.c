/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, ftell, fread, fclose 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
    char* buffer;
    int size;
    int count;

    FILE* fp = fopen("C:\\Users\\PKNU\\Documents\\asdf.txt", "r");    

    fseek(fp, 0, SEEK_END);    
    size = ftell(fp);          

    buffer = malloc(size + 1);    
    memset(buffer, 0, size + 1);  
     
    fseek(fp, 0, SEEK_SET);               
    fread(buffer, size, 1, fp);   

    printf("%s\n", buffer);
          fclose(fp);     

    free(buffer);  
    
    system("pause");

    return 0;
}