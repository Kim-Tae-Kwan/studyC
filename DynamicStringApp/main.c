/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���ڿ� �����Ҵ� �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
void print_str(char** ps);

// �����Լ�
int main(void) 
{
    char temp[80];
    char* str[21] = {0};
    int i=0;
    
    while (1)
    {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    print_str(str);

    for (int i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }
   

	system("pause");
	return EXIT_SUCCESS;
}
void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}