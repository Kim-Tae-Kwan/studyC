#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int a = 20, b = 3;
    double res;

    res = (double)(a / b);
    printf("a = %d, b = %d\n",a, b);
    printf("a / b�� ��� : %.1lf\n", res);

    a = (int)res;
    printf("(int) %.1lf�� ��� : %d\n", res, a);*/
    
    int a = 10;
    double b = 3.14;
    long double ld = 345;

    printf("int�� ������ ũ�� : %d\n", sizeof(a));
    printf("double�� ������ ũ�� : %d\n", sizeof(b));
    printf("������ ����� ũ�� : %d\n", sizeof(10));
    printf("������ ������� ũ�� : %d\n", sizeof(1.5+3.4));
    printf("char�� ������ ũ�� : %d\n", sizeof(char));
    printf("long double�� ������ ũ�� : %d\n", sizeof(ld));
    system("pause");
    return 0;
}