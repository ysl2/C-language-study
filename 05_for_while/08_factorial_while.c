#include <stdio.h>

//用while求阶乘
int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    int i = 2;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("%d!=%d\n", n, fact);
    return 0;
}