#include <stdio.h>

//逗号表达式
//用来链接两个表达式，并以右边的表达式的值作为结果
//主要在for中使用
/*
逗号用来连接两个表达式，并以其右边的
表达式的值作为它的结果。逗号的优先级
是所有的运算符中最低的（比赋值还低），所以它两边的
表达式会先计算；逗号的组合关系是自左
向右，所以左边的表达式会先计算，而右
边的表达式的值就留下来作为逗号运算的
结果。
*/

//在函数f(a, b)中的逗号只是一个分隔参数的普通逗号
//在函数f((a, b))中的逗号是逗号表达式。与上面的区别在于多了一层括号

int main()
{
    printf("Hello World!\n");
    return 0;
}