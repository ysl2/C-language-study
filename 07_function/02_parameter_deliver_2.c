#include <stdio.h>

//参数传递 2

void swap(int a, int b);

int main()
{
    int a = 5;
    int b = 6;
    swap(a, b); //传进去的是常量5和6，a与b实际上没有发生改变
    printf("a = %d, b = %d", a, b); //a = 5, b = 6，并没有交换
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}