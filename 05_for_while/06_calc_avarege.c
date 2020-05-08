#include <stdio.h>

//计算一组数的平均数（-1为退出循环标记）
int main()
{
    int number = 0;
    int sum = 0;
    int count = 0;
    //scanf("%d", &number);
    while (1)
    {
        scanf("%d", &number);
        if (number == -1)
        {
            break;
        }
        sum += number;
        count++;
        //scanf("%d", &number);
    }
    printf("%f\n", 1.0 * sum / count);
    return 0;
}