#include <stdio.h>

//求a的连续和
int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = 0;
    int i;
    int t = 0;
    for (i = 0; i < n; i++)
    {
        t = t * 10 + a;
        sum += t;
    }
    return 0;
}