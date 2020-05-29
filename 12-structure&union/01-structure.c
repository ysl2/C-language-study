#include <stdio.h>
struct date
{
    int month;
    int day;
    int year;
};

int main(int argc, char const *aegv[])
{
    struct date today, today2, today3;
    //结构体声明方式1
    struct abc
    {
        int month;
        int day;
        int year;
    };
    struct abc p_1;
    //结构体声明方式2：
    struct
    {
        int x;
        int y;
    } p1, p2; //p1和p2都是一种无名结构，里面有x和y
    //结构体声明方式3：
    struct point
    {
        int x;
        int y;
    } p3, p4; //p1和p2都是point类型的变量，里面有x和y的值
    //这种方式同时进行了构造和声明。
    today.month = 7;
    today.day = 31;
    today.year = 2014;

    // today2 = {7, 31, 2014};
    // today3 = {.month = 7, .year = 2014};
    printf("Today's date is %i - %i - %i.\n", today.year, today.month, today.day);
    // printf("Today's date is %i - %i - %i.\n", today2.year, today2.month, today2.day);
    // printf("Today's date is %i - %i - %i.\n", today3.year, today3.month, today3.day);
    
    //结构运算
    p3 = (struct point){5, 10}; //相当于p3.x = 5, p3.y = 10;
    p4 = p3;                    //相当于p4.x = p3.x, p4.y = p3.y;
    
    //结构指针
    //和数组变量不同，结构变量的名字并不是结构变量的地址，必须使用 & 运算符
    struct date *pDate = &today;
    (*pDate).month = 12;
    //或
    pDate->month = 12; //用->表示指针所指的结构变量中的成员

    //结构体作为函数参数的时候，会重新复制一份，而不是直接引用
    //如果想通过一个方法改变这个结构体，有以下方法：
    //1.创建一个临时的结构变量，然后把这个结构返回给调用者
    //2.把结构指针作为参数（k & R，第131页），推荐这种方式
    //->的优先级比&高
    return 0;
}