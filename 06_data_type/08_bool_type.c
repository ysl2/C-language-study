#include <stdio.h>
#include <stdbool.h>  //bool类型需要的包

//bool类型（需要导包），从C99开始有bool类型
//实际上bool还是用整数类型表达的
//在java中，0和1 与 boolean是没有任何关系的
//如果你写if(1)或者if(0)都会报错。因为只能是boolean类型
int main()
{
    bool flag1 = true;
    bool flag2 = false;
    printf("%d\n", flag1);
    printf("%d\n", flag2);
    return 0;
}