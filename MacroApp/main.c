/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / �̸� ���ǵ� ��ũ�� �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func();

// �����Լ�
int main(void) 
{
    printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);

    func();


	system("pause");
	return EXIT_SUCCESS;
}
void func()
{
    printf("\n");
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);
}
