#include <stdio.h>

//用于学习变量
int main()
{
    //也是C99的写法，magic number
    const int AMOUNT = 100; //常量只能赋值一次
    int price = 0;
    printf("请输入金额（元）\n");
    //读入函数，如果没有成功读入数字，将会取默认值。
    //int类型的默认值是0
    scanf("%d", &price); //注意&符号

    //C99允许在程序的任何位置定义变量
    //传统的ANSI C只能在代码开头定义变量
    int change = AMOUNT - price;
    printf("找您%d元\n", change);
    return 0;
}