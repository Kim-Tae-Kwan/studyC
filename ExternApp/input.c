#include <stdio.h>

extern int count; //main.c
int total = 0; //input.c

int input_data()
{
	int pos;

	while (1)
	{
		printf("��� �Է� : ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}

	return total;
}