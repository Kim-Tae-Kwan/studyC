/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ����ü �н�.
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
// �����Լ�
int main(void)
{
	/*union student s1 = { .grade=4.4 };

	printf("�й� : %d\n", s1.num);
	s1.num = 4;
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);*/

	ss ss;
	char* pc = NULL;

	ss = 2;

	printf("0 : ��, 1 : ����, 2 : ����, 3 : �ܿ�\n");

	
		printf("������ �����Ͻÿ�. : ");
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

		

		printf("���� ���� Ȱ�� => %s\n", pc);


	

	system("pause");
	return EXIT_SUCCESS;
}