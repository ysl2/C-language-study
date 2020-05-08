#include <stdio.h>

//while循环
//求一个正整数有多少位
int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);
    if (!(x > 0))
    {
        n = 1;
    }
    while (x > 0)
    {
        x /= 10;
        n++;
    }
    printf("%d\n", n);
    return 0;
}