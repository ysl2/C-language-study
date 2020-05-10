#include <stdio.h>

//正序分解整数
int main()
{
    int x;
    int mask = 1;
    scanf("%d", &x);
    int temp = x;
    while (temp > 9)
    {
        temp /= 10;
        mask *= 10;
    }
    while (mask > 0)
    {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    }
    printf("\n");
    return 0;
}