#include <stdio.h>

//不同类型的指针不能相互赋值，但是可以通过强制类型转换进行赋值
//void* 表示不知道指向什么东西的指针，计算时与char相同（但不相通）

int main()
{
    int i = 1;
    int *p = &i;
    void *q = (void *)p; //这并没有改变p所指的变量的类型，而是让后人用不同的眼光通过p看它所指的变量。
    return 0;
}