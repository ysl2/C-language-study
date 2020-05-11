#include <stdio.h>
#define maxNumber 25

//Sieve of Eratosthenes: 质数筛子，埃拉托色尼筛法

int main()
{
    int isPrime[maxNumber];
    int i;
    int x;
    for (i = 0; i < maxNumber; i++)
    {
        isPrime[i] = 1;
    }
    //for test <<< start
    printf("\t");
    for (i = 2; i < maxNumber; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    //for test >>> over
    for ( x = 2; x < maxNumber; x++)
    {
        if (isPrime[x])
        {
            for (i = 2; i * x < maxNumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
        //for test <<< start
        printf("%d\t", x);
        for (i = 2; i < maxNumber; i++)
        {
            printf("%d\t", isPrime[i]);
        }
        printf("\n");
        //for test >>> over
    }
    for (i = 2; i < maxNumber; i++)
    {
        if (isPrime[i])
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}