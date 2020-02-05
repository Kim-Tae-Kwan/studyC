/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 문자열 연습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(char a,char b);
// 메인함수
int main(void)
{
	/*int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	getchar();

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);*/

	/*char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);*/


	/*char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);*/

	/*char str[80] = "apple";

	strcat(str, "pie");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);*/

	/*char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일 : %s\n", resp);*/
	int res=0;
	
	while (1)
	{
		char str1[80];
		char str2[80];

		res=cmp(str1,str2);
		if (res == 1)
			break;
		

	}
	system("pause");
	return EXIT_SUCCESS;
}

int cmp(char a[],char b[])
{
	

	printf("2개의 과일 이름 : ");
	scanf("%s%s", a, b);

	if (a[0] == 'X' || b[0] == 'X')
		return 1;

	printf("사전에 먼저 나오는 과일 : ");
	if (strcmp(a, b) < 0)
		printf("%s\n", a);
	else
		printf("%s\n", b);

	return 0;
}