#include <stdio.h>

extern int count; //main.c
int total = 0; //input.c

int input_data()
{
	int pos;

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}

	return total;
}