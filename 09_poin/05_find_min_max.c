#include <stdio.h>

//指针应用：找出最大最小值
//函数返回多个值，某些值就只能通过指针返回传入的参数
//实际上是需要保存带回的结果的变量

void minMax(int *a, int len, int *max, int *min);
/*
注意比较函数原型声明的*a和下方函数主体声明中的a[]，二者等价，编译与运行都正常
这是因为在参数传递的过程中，对于数组的传递实际上就是以指针的方式传递
*/

/*
以下四种函数原型是等价的：
int sum(int *ar, int n);
int sum(int *, int);
int sum(int ar[], int n);
int sum(int [], int);
*/

/*
数组变量是特殊的指针，但是数组单元表达的是变量，需要用&取地址
    a == &a[0]
[]运算符可以对数组做，也可以对指针做
    p[0] <==> a[0]
*运算符可以对指针做，也可以对数组做
    *a = 25
数组变量是const的指针，不能被赋值
    比如: int b[] = a; 是错误的
    原因：int b[] <==> int const *b，因此不能被赋值
*/

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 16, 17, 21, 23, 55};
    int min, max;
    printf("main sizeof(a) = %lu\n", sizeof(a));
    printf("main a = %p\n", a);
    minMax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("a[0] = %d\n", a[0]);
    printf("min = %d, max = %d\n", min, max);
    int *p = &min;
    printf("%d\n", *p);
    printf("p[0] = %d\n", p[0]);
    printf("*a = %d\n", *a);
    return 0;
}

void minMax(int a[], int len, int *max, int *min)
{
    int i;
    printf("minMax sizeof(a) = %lu\n", sizeof(a));
    printf("minMax a = %p\n", a);
    a[0] = 1000;
    *min = *max = a[0];
    for (i = 1; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}