#include <stdio.h>

long int a[1000000];

void fibo(long long int n)
{
    a[0] = 0;
    a[1] = 1;
    int i;

    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            a[i] = (a[i - 1] + a[i - 2]) % 1234567;
        }
        printf("%lld ", a[i - 1]);
    }
}

int main()
{

    long long int n;

    scanf("%lld", &n);

    fibo(n);

    return 0;
}