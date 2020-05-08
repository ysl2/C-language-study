#include <stdio.h>

//打印100以内的素数/质数（指除了1和本身，不能被任何数整除）
int main()
{
    for (int j = 0; j < 200; j++)
    {
        int flag = 0;  //先默认是素数
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;  //如果发现不是素数，就改flag标记
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", j);
        }
        if (j % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}