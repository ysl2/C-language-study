#include <stdio.h>
#define number 10

//判断是否能被已知的且< X的素数整除

int isPrime(int x, int knwonPrimes[], int numberOfKnownPrimes);

int main(void)
{
    //const int number = 100;
    int prime[number] = {2};
    int count = 1;
    int i = 3;
    {
        int i;
        printf("\t\t");
        for (i = 0; i < number; i++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    while (count < number)
    {
        if (isPrime(i, prime, count))
        {
            prime[count++] = i;
        }
        {
            printf("i=%d \tcnt=%d\t", i, count);
            int i;
            for (i = 0; i < number; i++) {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
        i++;
    }
    for (i = 0; i < number; i++)
    {
        printf("%d", prime[i]);
        if ((i + 1) % 5)
            printf("\t");
        else
            printf("\n");
    }
    return 0;
}

int isPrime(int x, int knwonPrimes[], int numberOfKnownPrimes)
{
    int ret = 1;
    int i;
    for (i = 0; i < numberOfKnownPrimes; i++)
    {
        if (x % knwonPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}