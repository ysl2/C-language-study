#include <stdio.h>

//没有参数的时候
//void表示函数没有参数，（）表示不检查函数的参数。二者是不同的
//但是如果不指定，可能会引发错误（传入错误的类型）。因此一定要加上参数，避免发生错误

//void swap(); //不要检查参数。不建议这样做，会发生潜在错误
void swap(void); //如果没有参数，需要这样做，可以避免错误

int main()
{
    printf("Hello World!\n");
    return 0;
}
void swap()
{
    return;
}