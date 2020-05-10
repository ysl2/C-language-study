#include <stdio.h>

//循环的跳出（goto）
//凑硬币，只要有合适的就跳出。
int main()
{
    int x;
    int one, two, five;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                    goto out;
                    //goto需要慎用，因为破坏了代码的结构性
                    //只建议在类似这种多重循环的情况下使用
                    //YuSLi个人理解：类似java的break label
                }
            }
        }
    }
out:
    return 0;
}