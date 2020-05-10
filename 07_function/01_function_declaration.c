#include <stdio.h> //standard io

//函数声明
//根据编译器的判断力度，可能只会警告，也可能会直接error
//在我的vs2019上产生警告，没有error。这是因为编译器进行了推断，推断了下面的函数。
//但是最好（或者规范）是加上函数声明
int sum(int a, int b); //函数声明
//或者这样声明也行：
//int sum(int, int);

//C语言不允许函数的嵌套定义，但是可以在函数中声明另一个函数

int main()
{
    //c语言中可以这样定义，表示定义一个hello的函数，返回int
    int result, hello(void); 
    result = sum(1, 2);
    printf("%d", result);
    return 0; //这个返回是有意义的。比如windows的批处理文件
    //传统上，返回0表示正常返回，返回非0的值表示异常
}

int sum(int a, int b)
{
    return a + b;
}
int hello()
{
    return (0); //这个括号没有意义，但是会让人误解，因此不要这样写
}
