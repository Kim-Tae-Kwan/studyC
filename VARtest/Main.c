#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483648;
    long long lln = 123451234512345;
    unsigned int ui = 4294967294;
    char a[5] = "apple";
    char fuit[20] = "strawberry";


    printf("short�� ���� ��� : %d\n", sh);
    printf("int�� ���� ��� : %d\n", in);
    printf("long�� ���� ��� : %ld\n", ln);
    printf("long long�� ���� ��� : %lld\n", lln);
    printf("short�� ���� ��� : %d\n", sh);
    printf("unsigned int �ִ밪 : %u\n", ui);
    ui= -1;
    printf("unsigned int ���簪 : %u\n", ui);



    system("pause");
    return 0;
}