/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� ����� �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(void) 
{

   /* FILE* fp;
    int i;
    char str[80];
    int ch;
    int ch2;

    printf("���� �Է��ϼ��� : ");
    

    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("������ ������ �� �Ͽ����ϴ�.\n");
        return 1;
    }

    i = 0;

    while (str[i]!='\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    printf("������ �����Ͽ����ϴ�.\n");
    printf("���� ���� : \n");
    fclose(fp);

    fp = fopen("b.txt", "r");
    while (1)
    {
        ch=fgetc(fp);
        if (ch == EOF)
            break;
        putchar(ch);
    }


    fclose(fp);*/
    
    /*int ch;

    while (1)
    {
        printf("�Է� : ");
        ch = fgetc(stdin);
        printf("\n");
        if (ch == EOF)
            break;
        

        fputc(ch, stdout);
      
    }*/

   /* FILE* fp;
    int ary[10] = { 13,10,13,10,10,27,13,10,13,10 };
    int i, res;

    fp = fopen("c.txt", "wb");
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);

    }
    fclose(fp);

    fp = fopen("c.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res == EOF) break;
        printf("%4d", res);

    }
    printf("\n");

    fclose(fp);*/

    FILE* fp;
    char str[20];

    fp = fopen("d.txt", "a+");
    if (fp == EOF)
    {
        printf("������ ������ �� �Ͽ����ϴ�.\n");
        return 1;
    }

    while (1)
    {
        printf("���� �̸� : ");
        scanf("%s", str);


        if (strcmp(str, "end") == 0)
            break;
        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp))
                    break;
                printf("%s", str);
            }
        }
        else
            fprintf(fp, "%s\n", str);
    }


    fclose(fp);


	system("pause");
	return EXIT_SUCCESS;
}