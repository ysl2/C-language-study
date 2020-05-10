#include <stdio.h>

//水仙花数
int main()
{
    int n;
    scanf("%d", &n);
    //遍历所有的三位数
    int first = 1;
    int i = 1;
    while (i < n)
    {
        first *= 10;
        i++;
    }
    //printf("first = %d\n", first);
    //遍历100 ~ 999
    i = first;
    while (i < first * 10)
    {
        int temp = i;
        int sum = 0;
        do
        {
            int d = temp % 10;
            temp /= 10;
            int p = 1;
            int j = 0;
            while (j < n)
            {
                p *= d;
                j++;
            }
            sum += p;
        } while (temp > 0);
        if (sum == i)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}