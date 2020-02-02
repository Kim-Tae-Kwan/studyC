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
    printf("a / b의 결과 : %.1lf\n", res);

    a = (int)res;
    printf("(int) %.1lf의 결과 : %d\n", res, a);*/
    
    int a = 10;
    double b = 3.14;
    long double ld = 345;

    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결과값의 크기 : %d\n", sizeof(1.5+3.4));
    printf("char형 변수의 크기 : %d\n", sizeof(char));
    printf("long double형 변수의 크기 : %d\n", sizeof(ld));
    system("pause");
    return 0;
}