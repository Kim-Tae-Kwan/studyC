/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - KimTK
*/

#include <stdio.h>
#include <stdlib.h>
void auto_func();
void static_func();
void add_ten(int* pa);
int* sum(int a, int b);
// �����Լ�
int main(void) 
{
    /*int i;

    printf("�Ϲ� ���� ����(auto)�� ����� �Լ� ...\n");
    for (i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("���� ���� ����(static)�� ����� �Լ� ...\n");
    for (i = 0; i < 3; i++)
    {
        static_func();
        
    }*/
   /* register int i;
    auto int sum = 0;

    for (i = 0; i <= 10000; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);*/
    /*int a = 10;
    add_ten(&a);
    printf("%d\n", a);*/
    int* resp = sum(10, 20);
    printf("�� ������ �� : %d\n", *resp);


	system("pause");
	return EXIT_SUCCESS;
}
void add_ten(int* pa)
{
    *pa += 10;
}
void auto_func()
{
    auto int a = 0;

    a++;
    printf("%d\n", a);
    
}

void static_func()
{
    static int a;

    a++;
    printf("%d\n", a);
    

}

int* sum(int a, int b)
{
    static int res;
    res = a + b;
    return &res;
}