/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
void input_data(int* pa, int* pb);
void swap_data();
void print_data(a, b);
int a, b;
int main(void)
{

	int ary[5][6] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}

	};

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			ary[j][5] += ary[j][i];
		}
	}

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			ary[4][j] += ary[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ary[4][5] += ary[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}



	system("pause");
	return EXIT_SUCCESS;
}

void input_data(int* pa, int* pb)
{
	printf("두 정수 입력 : ");
	scanf("%d %d", pa, pb);

}

void swap_data()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b)
{
	printf("두 정수 출력 : %d, %d\n", a, b);
}

