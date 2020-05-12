#include <stdio.h>
#include <stdlib.h>

//free(NULL)是允许的，
//因为平时在创建指针的好习惯是，初始化为0指针
//这样free(NULL)就是释放所有的空指针

int main()
{
    void *p = 0;
    void *p1 = 0; //初值为0
    int counter = 0;
    while ((p = malloc(100 * 1024 * 1024)))
        counter++;
    printf("分配了%d00MB的空间\n", counter);
    free(p);
    free(NULL); // 释放所有的空指针
    return 0;
}