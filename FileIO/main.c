/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fread, fclose �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memset �Լ��� ����� ��� ����

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