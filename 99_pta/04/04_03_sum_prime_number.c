#include <stdio.h>

//统计素数并求和
//统计给定区间m到n内的所有素数
//返回：所有在区间内的素数的个数 所有在区间内的素数的和
int main()
{
    int m, n;
    int i;
    int counter = 0;
    int sum = 0;
    scanf("%d %d", &m, &n);
    if (m == 1)
        m = 2;
    for (i = m; i <= n; i++)
    {
        int isPrime = 1;
        int k;
        for (k = 2; k < i - 1; k++)
        {
            if (i % k == 0)
            {
                isPrime = 0;
                break;
            }
        }
        //判断i是否是素数
        if (isPrime)
        {
            counter++;
            sum += i;
        }
    }
    printf("%d %d\n", counter, sum);
    return 0;
}