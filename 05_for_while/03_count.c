#include <stdio.h>

int main()
{
    //在判断循环边界的时候，如果次数太多不好判断，
    //可以先模拟一个较少的循环次数，然后做出推断
    int count = 100;
    while (count >= 0)
    {
        count--;
        printf("%d\n", count);
    }
    printf("发射\n");
    return 0;
}