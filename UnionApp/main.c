/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 공용체 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student
{
	int num;
	double grade;
};



enum season {
	SPRING,
	SUMMER,
	FALL,
	WINTER
};

typedef enum season ss;
// 메인함수
int main(void)
{
	/*union student s1 = { .grade=4.4 };

	printf("학번 : %d\n", s1.num);
	s1.num = 4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);*/

	ss ss;
	char* pc = NULL;

	ss = 2;

	printf("0 : 봄, 1 : 여름, 2 : 가을, 3 : 겨울\n");

	
		printf("계절을 선택하시오. : ");
		scanf("%d", &ss);

		switch (ss)
		{
		case SPRING:
			pc = "inline"; break;
		case SUMMER:
			pc = "swimming"; break;
		case FALL:
			pc = "trip"; break;
		case WINTER:
			pc = "skiing"; break;

		}

		

		printf("나의 레저 활동 => %s\n", pc);


	

	system("pause");
	return EXIT_SUCCESS;
}