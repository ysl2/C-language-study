#include <stdio.h>

//#开头的是编译预处理指令
//仅作文本替换

//没有值的宏：
//#define _DEBUG
//用于条件编译，
//后面有其他的编译预处理指令来检查这个宏是否已经被定义过了

//预定义的宏：
//__LINE__
//__FILE__
//__DATE__
//__TIME__
//__STDC__

//像函数的宏：
//#define cube(x) ((x)*(x)*(x))
//每个参数的引用必须被括号套起来
//并且最外面也要套括号

int main()
{
    printf("Hello World!\n");
    return 0;
}