#include <stdio.h>

//字符串数组

/*
char **a;
a是一个指针，指向另一个指针，那个指针指向一个字符（串）

char a[][];
会报错，第二维必须给出确定值

char a[][10];
表示一个二维字符数组

char *a[];
a[0]相当于char *
表示一个一维的，以字符串为元素的数组
*/

/*
字符串数组的应用：
int main (int argc, char const *argv[])
argv[0]是命令本身
当使用Unⅸx的符号链接时，反映符号链接的名字
argc表示argv的长度，也就是命令的个数

搜索busybox，对于带参运行十分有用

类比java中的main函数：
public static void main(Sting[] args) {}
*/
int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
        printf("%d:%s\n", i, argv[i]);
    return 0;
}