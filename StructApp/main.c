/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 사용자 정의 정의형Struct 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile
{
	char name[80];
	int age;
	double height;
	char* intro;

};

struct student
{
	struct profile pf;
	int id;
	double grade;

};
// 메인함수
int main(void)
{
	struct student tk;

	strcpy(tk.pf.name, "kim");
	tk.pf.age = 27;
	tk.pf.height = 175.5;
	tk.grade = 2.5;
	tk.id = 20133039;

	tk.pf.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(tk.pf.intro);

	printf("이름 : %s\n", tk.pf.name);
	printf("나이 : %d\n", tk.pf.age);
	printf("키   : %.1lf\n", tk.pf.height);
	printf("자기소개 : %s\n", tk.pf.intro);
	printf("학번 : %d\n", tk.id);
	printf("성적 : %.1lf\n", tk.grade);
	free(tk.pf.intro);

	system("pause");
	return EXIT_SUCCESS;
}