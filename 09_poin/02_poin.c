#include <stdio.h>

//指针
//就是保存地址的变量

int main()
{
    //C语言里没有int* 这种类型，因此*都是针对某一个变量而言的
    int i;
    int* p = &i; //p是指向i的指针
    int* p1, q1; //p1是指针，q1是普通变量
    int *p2, q2; //p2是指针，q2是普通变量
    int *p3, *q3; //只有这样才能两个都是指针
    return 0;
}