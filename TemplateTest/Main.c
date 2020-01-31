#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!\n");
    printf("%lf\n",3.14);
    printf("%.1lf\n",3.141592);
    printf("%.10lf\n",3.14);
    printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);

    printf("%lf\n", 1e10);
    printf("%.6lf\n", 3.14e-5);
    printf("%.2le\n", 0.0000314);
    printf("%.1le\n", 0.0000314);
    printf("%c\n", 'c');
    printf("%s\n", "zzzzzzzzzzzzz");
    printf("%d\n", 'a');


    
    //type here
    
    system("pause");
    return 0;
}