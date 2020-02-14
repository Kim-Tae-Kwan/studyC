/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct student_t {
	int kor;
	int eng;
	int math;
} student_t;
void total_kor(struct student_t* a);
void total_eng(struct student_t* a);
void total_math(struct student_t* a);
// �����Լ�
int main(void)
{
	student_t a[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d ��° �л��� ����,����,���� ������ �Է��ϼ��� :",i+1);
		scanf("%d%d%d", &a[i].kor, &a[i].eng, &a[i].math);
	}


	total_kor(a);
	total_eng(a);
	total_math(a);



	system("pause");
	return EXIT_SUCCESS;
}

void total_kor(struct student_t* a)
{
	int total=0;
	double avg=0.0;
	for (int i = 0; i < 3; i++)
	{
		total += a[i].kor;
	}
	avg = total / 3.0;
	printf("���� ����, ��� : %d %.1lf\n", total, avg);
}
void total_eng(struct student_t* a)
{
	int total = 0;
	double avg = 0.0;
	for (int i = 0; i < 3; i++)
	{
		total += a[i].eng;
	}
	avg = total / 3.0;
	printf("���� ����, ��� : %d %.1lf\n", total, avg);
}
void total_math(struct student_t* a)
{
	int total = 0;
	double avg = 0.0;
	for (int i = 0; i < 3; i++)
	{
		total += a[i].math;
	}
	avg = total / 3.0;
	printf("���� ����, ��� : %d %.1lf\n", total, avg);
}