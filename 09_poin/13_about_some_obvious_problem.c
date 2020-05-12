#include <stdio.h>

//常见问题：

//1.申请后没free -> 长时间运行内存逐渐下降
//2.free过了再free
//3.地址变过了，直接去free

int main()
{
    printf("Hello World!\n");
    return 0;
}