#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* double apple;
    int banana;
    int orange;

    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;

    printf("apple : %.1lf\n", apple);
    printf("banana : %d\n", banana);
    printf("orange : %d\n", orange);*/

   /* int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;
    post = (b++) * 3;

    printf("초기값 a =%d, b=%d\n", a, b);
    printf("전위형: (++a)*3 = %d, 후위형: (a++)*3 = %d", pre, post);*/

    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a > 10) || (a < 20);
    printf("(a > 10) || (a < 20) : %d\n", res);
    res = !(a >= 30);
    printf("!(a >= 30)           : %d\n", res);
    


    
    
    system("pause");
    return 0;
}