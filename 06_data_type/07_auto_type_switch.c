#include <stdio.h>

//自动类型转换:
//char -> short -> int -> long -> long long
//int -> float -> double

//对于printf，任何小于int的类型会被转换成int，float会被转换成double
//但是scanf不会，要输入short，需要%hd

//c语言也有强制类型转换
//强制类型转换的优先级高于四则运算，为了避免错误，应该适当的加括号
int main()
{
    printf("Hello World!\n");
    return 0;
}