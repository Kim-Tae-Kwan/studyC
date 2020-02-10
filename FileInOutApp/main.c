/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 파일 입출력 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{

   /* FILE* fp;
    int i;
    char str[80];
    int ch;
    int ch2;

    printf("내용 입력하세요 : ");
    

    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 만들지 못 하였습니다.\n");
        return 1;
    }

    i = 0;

    while (str[i]!='\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    printf("파일을 생성하였습니다.\n");
    printf("파일 내용 : \n");
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
        printf("입력 : ");
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
        printf("파일을 만들지 못 하였습니다.\n");
        return 1;
    }

    while (1)
    {
        printf("과일 이름 : ");
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