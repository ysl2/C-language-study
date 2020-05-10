#include <stdio.h>

//求最大公约数（辗转相除法）
int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
        printf("a = %d, b = %d, t = %d\n", a, b, t);
    }
    printf("\ngcd = %d\n", a);
    return 0;
}