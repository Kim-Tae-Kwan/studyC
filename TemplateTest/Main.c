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
    
    //type here
    
    system("pause");
    return 0;
}