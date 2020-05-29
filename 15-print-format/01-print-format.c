#include <stdio.h>

//格式化输入输出
// %[flags][width][.prec][hIL]type

//printf和scanf都有返回值
//printf的返回值：读入的项目数
//scanf的返回值：输出的字符数
//在要求严格的程序中，应该判断每次调用scanf或printf的返回值，从而了解程序运行中是否存在问题

int main(int argc, char const *argv[])
{
    //对于printf:
    //flags:
    printf("%9d\n", 123);
    printf("%-9d\n", 123); //减号表示左对齐
    printf("%+9d\n", 123); //表示强制输出+号
    printf("%-+9d\n", 123);
    printf("%+-9d\n", 123);
    printf("%09d\n", 123); //表示在前面填0
    printf("%-09d\n", 123);

    //width:
    printf("%9.2f\n", 123.0); //9表示整个输出要占据9个字符的位置，.2表示小数点有两位
    printf("%*d\n", 6, 123); //6会被填到*的地方去，123是用来满足%d的
    
    //type:表示输出类型
    //hh: 单个字节
    //h: short
    //l: long
    //ll: long long
    //L: long double

    //%n: 用于记录当输出到%n的时候，已经输出了多少个字符，然填到指针所指的变量中
    int num;
    printf("%hhd%n\n", (char) 12345, &num);
    printf("%d\n", num);
    printf("%d%n\n", 12345, &num);
    printf("%d\n", num);
    printf("%dty%n\n", 12345, &num);
    printf("%d\n", num);

    //对于scanf:
    //flag=*:跳过

    //type:
    //d
    //i
    //u
    //o
    //x
    //a, e, f, g
    //c
    //s
    //[...]
    //p
    return 0;
}