#include <stdio.h>
//交换变量
int main()
{
    int a = 5;
    int b = 6;
    int t = t;
    t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
    a = 3;
    b = 7;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}