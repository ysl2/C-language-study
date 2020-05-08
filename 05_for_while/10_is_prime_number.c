#include <stdio.h>

//判断是否是素数/质数（指除了1和本身，不能被任何数整除）
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("%d不是素数", x);
            return 0;
        }
    }
    printf("%d是素数", x);
    return 0;
}