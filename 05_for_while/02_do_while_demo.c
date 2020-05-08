#include <stdio.h>

//do-while循环
//求一个正整数有多少位（改良）
int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);

    do
    {
        x /= 10;
        n++;
    } while (x > 0);
    printf("%d\n", n);
    return 0;
}