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

// �����Լ�
int main(void) 
{
    int total=0;
    for (int i = 0; i <= 300; i++)
    {
        if (i % 3 == 0)
        {
            total += i;
        }
    }
    printf("���� : %d\n", total);



	system("pause");
	return EXIT_SUCCESS;
}