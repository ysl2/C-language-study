#ifndef __MAX_H__ 
#define __MAX_H__
//ifndef: 条件编译指令，防止头文件的重复引用
//#pragma once也是一样的作用，但不是所有的编译器都支持
int max(int a, int b);
extern int gALL; //告诉编译器在整个程序的某个位置有一个gALL

struct Node
{
    int value;
    char *name;
};
#endif