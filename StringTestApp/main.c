/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� �׽�Ʈ
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char small, cap = 'H';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("�빮�� : %c %c", cap, '\n');
    printf("�ҹ��� : %c\n", small);






	system("pause");
	return EXIT_SUCCESS;
}