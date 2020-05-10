#include <stdio.h>

//整数除以0与浮点数除以0
int main()
{
    printf("%f\n", 12.0 / 0.0);  //inf
    printf("%f\n", -12.0 / 0.0);  //-inf
    printf("%f\n", 0.0 / 0.0);  //nan
    //printf("%d", 12 / 0);  //编译期报错。因为inf和nan是浮点类型，不能用整数类型表达
    return 0;
}