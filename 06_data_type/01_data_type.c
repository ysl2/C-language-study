#include <stdio.h>
//c语言的类型；
//整型：char, short, int, long, [long long](C99才有的)
//浮点型：float, double, [long double](C99才有的)
//逻辑：bool
//指针
//自定义类型

//关于选择：大多数情况下，整数选int，浮点选double

//八进制: 数字以0开头
//十六进制: 数字以0x开头

//char: %c    '1' = 49, 'A' = 65, 'a' = 97
//int: %d
//long(或者long long): %ld
//float: %f, %e(科学计数法)
//double: %lf, %e(科学计数法)
//关于科学计数法：-5.67E+16 (中间不能有空格)
//unsigned: %u
//unsigned long long: %lu
//输出八进制: %o
//输出十六进制: %x或%X（如果数字中有字母，这里的大小写会对应最终输出的字母的大小写）

//char < short < int < float < double
//注意和java不同：
//byte--short--char->int->long->float->double

//sizeof(int)
int main() {
    int a = 6;
    //java里面char占两个字节，byte和boolean占一个字节
    printf("sizeof(char) = %ld\n", sizeof(char));  //-128 ~ 127
    printf("sizeof(short) = %ld\n", sizeof(short));  //-32768 ~ 32767
    //int反映的是一个字长的大小，与CPU有关，因此在不同的计算机上也不一样
    printf("sizeof(int) = %ld\n", sizeof(int));  //-2^31 ~ 2^31 - 1
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("sizeof(float) = %ld\n", sizeof(float));
    printf("sizeof(double) = %ld\n", sizeof(double));
    printf("sizeof(long long) = %ld\n", sizeof(long long));
    printf("sizeof(long double) = %ld\n", sizeof(long double));
    //printf("sizeof(bool) = %ld\n", sizeof(bool));

    printf("\nsizeof(a) = %ld\n", sizeof(a++));
    printf("%d\n", a); //结果是a还是6，没有执行a++动作
    printf("sizeof(a) = %ld\n", sizeof(a + 1.0));  //结果是输出了double的范围
    printf("%d", a); //结果是a还是6，没有执行a++动作
    return 0;
}