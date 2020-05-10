#include <stdio.h>

//本地变量（局部变量）

int main()
{
    int a = 5;
    {
        int a = 0; //在java中不能重新定义，但是c语言可以，而且会掩盖原先的值
        //并且仅在作用域内有效，出了作用域就会被恢复成原先的值
        printf("a = %d\n", a); //a = 0
    }
    printf("a = %d\n", a); //a = 5
    return 0;
}