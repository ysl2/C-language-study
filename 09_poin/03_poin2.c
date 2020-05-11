#include <stdio.h>

//指针
//*只有在定义的时候，表示定义一个指针，将来会存放地址类型
//而在用的过程中，就表示解引用运算符了
//小心空指针：segmentation fault

void f(int *p);
void g(int k);

int main(void)
{
    int i = 6;
    printf("&i = %p\n", &i); //地址值
    f(&i);
    g(i);
    //g(&i); //note: expected 'int' but argument is of type 'int *'
    return 0;
}

void f(int *p)
{
    printf("p = %p\n", p); //地址值
    printf("*p = %d\n", *p); //6
    *p = 26;
}

void g(int k)
{
    printf("k = %d\n", k); //26
}