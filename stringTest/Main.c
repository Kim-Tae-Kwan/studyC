#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age;
    double height;

    printf("���̿� Ű�� �Է��ϼ��� :");
    scanf("%d%lf", &age, &height);
    printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

    char grade;
    char name[20];
    getchar();

    printf("������ �̸��� �Է��ϼ��� :");
    scanf("%c%s", &grade, &name);
    printf("������ %c �̰�, �̸��� %s �Դϴ�.\n", grade, name);
    
    
    system("pause");
    return 0;
}