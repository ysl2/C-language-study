#include <stdio.h>

//九九乘法表
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d * %d = %d\t", j, i, i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}