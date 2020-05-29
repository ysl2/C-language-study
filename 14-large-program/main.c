#include <stdio.h> //系统定义的用<>
#include "max.h" //用户自己定义的用""
#include "min.h"
//这两个的区别在于：
//""会优先在当前目录找。如果没有，才会在指定目录中找。
//<>会让编译器只在指定目录中找
//编译器知道自己的标准库头文件在哪里
//环境变量和编译器命令行参数也可以指定寻找头文件的目录

//大程序：多个C文件

//一个.c文件是一个编译单元
//编译器每次编译只处理一个编译单元

/*
include不是用来引入库的
stdio.h里只有printf的原型，printf的代码在另外的地方
现在的C语言默认会引入所有的标准库
#include <stdio.h>只是为了让编译器知道printf函数的原型，保证你调用的时候给出的参数值是正确的类型
*/
/*
在使用和定义这个函数的地方都应该#include这个头文件
一般的做法就是任何.c都有对应的同名的.h，把所有对外公开的函数的原型和全局变量的声明都放进去
在函数前面加上static就使得它成为只能在所在的编译单元中被使用的函数
在全局变量前面加上static就使得它成为只能在所在的编译单元中被使用的全局变量
*/

int main(void)
{
    int a = 5;
    int b = 6;
    printf("%d\n", max(a, gALL));
    return 0;
}
