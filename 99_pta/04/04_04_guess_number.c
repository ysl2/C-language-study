#include <stdio.h>

//猜数字小游戏
//人产生数字，计算机猜数字
int main()
{
    int number, n;
    int inp;
    int finished = 0;
    int cnt = 0;
    do
    {
        scanf("%d", inp);
        cnt++;
        if (inp < 0)
        {
            printf("Game Over\n");
            finished = 1;
        }
        else if (inp > number)
        {
            printf("Too Big\n");
        }
        else if (inp < number)
        {
            printf("Too Small\n");
        }
        else
        {
            if (cnt == 1)
            {
                printf("Bingo!\n");
            }
            else if (cnt <= 3)
            {
                printf("Lucky You!\n");
            }
            else
            {
                printf("Good Guess!\n");
            }
            finished = 1;
        }
        if (cnt == n)
        {
            if (!finished)
            {
                printf("Game Over\n");
                finished = 1;
            }
        }
    } while (!finished);
    return 0;
}