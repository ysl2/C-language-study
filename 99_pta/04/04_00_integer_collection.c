#include <stdio.h>

//求符合给定条件的整数集
int main()
{
    int a;
    scanf("%d", &a);
    int i, j, k;
    i = a;
    int counter = 0;
    while (i <= a + 3)
    {
        j = a;
        while (j <= a + 3)
        {
            k = a;
            while (k <= a + 3)
            {
                if (i != j)
                {
                    if (i != k)
                    {
                        if (j != k)
                        {
                            counter++;
                            printf("%d%d%d", i, j, k);
                            if (counter == 6)
                            {
                                printf("\n");
                                counter = 0;
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}