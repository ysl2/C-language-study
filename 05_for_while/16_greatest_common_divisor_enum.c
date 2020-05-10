#include <stdio.h>

//求最大公约数（通过枚举的方法）
int main()
{
    int a, b;
    int min;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    int ret = 0;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                ret = i;
            }
        }
    }
    printf("%d和%d的最大公约数是%d\n", a, b, ret);
    return 0;
}