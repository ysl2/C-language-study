#include <stdio.h>
#include <stdlib.h>

//动态内存分配

//在C99可以用变量做数组定义的大小
//在C99之前，采用以下方式：
//int *a = (int *)malloc(n*sizeof(int));
//注：需要包含头文件：<stdlib.h>

//向malloc申请的空间的大小是以字节为单位的
//返回的结果是void *，需要类型转换为自己需要的类型

//如果申请失败则返回0，或者叫做NULL

//注意申请完之后需要释放地址，并且只能释放申请空间的首地址
//如果要释放的空间不是通过malloc申请得来的，程序会报错并且异常终止

int main()
{
    //以下模拟C99之前的代码
    int number;
    int *a;
    int i;
    printf("输入变量：");
    scanf("%d", &number);
    // int a[number]; //C99之前不能这样定义，并且变量需要提前声明
    a = (int *)malloc(number * sizeof(int));
    for (i = 0; i < number; i++)
        scanf("%d", &a[i]);
    for (i = number - 1; i >= 0; i--)
        printf("%d", a[i]);
    free(a); //注意申请完之后需要释放地址，并且只能释放申请空间的首地址
    return 0;
}