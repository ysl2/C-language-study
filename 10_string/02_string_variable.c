#include <stdio.h>
#include <string.h>

//字符串的数组定义与指针定义：
//如果是数组定义，
    //可以修改内容，在作为本地变量的情况下，空间会被自动回收
//如果是指针定义,
    //字符串不知道在哪里。
    //不能修改内容，只能用于字符串的表达。
    //可以处理参数
    //可用于通过malloc的动态分配空间

int main()
{
    //字符串一旦定义，就是常量，只读
    //并且如果两个字符串内容相同，将会指向同一块地址
    char *s = "Hello world!";
    char *s2 = "Hello world!";
    //以下二者的地址相同
    printf("s = %p\n", s);
    printf("s2 = %p\n", s2);

    //如果想要修改字符串，应该用数组：
    char s3[] = "Hello world!";
    printf("s3 = %p\n", s3);
    s3[0] = 'B';
    printf("Here!s3[0] = %c\n", s3[0]);
    return 0;
}