#include <stdio.h>

//参数传递 1

void cheer(int i);

int main()
{
    cheer(2.0); //输出2
    //当类型不匹配时，编译器总是悄悄替你把类型转换好，
    //但是这很可能不是你所期望的
    //后续的语言，C++/Java在这方面很严格
    return 0;
}

void cheer(int i)
{
    printf("cheer %d\n", i);
}