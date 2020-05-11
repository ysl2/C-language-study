#include <stdio.h>

//取地址运算符 &

int main()
{
    int i = 0;
    printf("0x%x\n", &i);
    printf("0x%p\n", &i);

    printf("\n");

    int a[10];
    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    return 0;
}