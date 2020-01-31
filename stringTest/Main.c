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

    printf("나이와 키를 입력하세요 :");
    scanf("%d%lf", &age, &height);
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

    char grade;
    char name[20];
    getchar();

    printf("학점과 이름을 입력하세요 :");
    scanf("%c%s", &grade, &name);
    printf("학점은 %c 이고, 이름은 %s 입니다.\n", grade, name);
    
    
    system("pause");
    return 0;
}