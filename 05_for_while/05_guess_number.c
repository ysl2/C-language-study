#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//通过随机数函数和循环语句，做猜数字小游戏
int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100之间的数。\n");
    do
    {
        printf("猜这个数字（1~100之间）\n");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("你猜的数大了\n");
        }
        else if (a < number)
        {
            printf("你猜的数小了。\n");
        }
    } while (a != number);
    printf("太好了，你用了%d次就猜到了答案。\n", count);
    return 0;
}