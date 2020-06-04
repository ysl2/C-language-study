#include <stdio.h>

//typedef:自定义数据类型
//注意：前面的是原先的数据类型，后面的是你自己起的新名字
//typedef long int64_t;

/*
typedef struct ADate { //原先的名字
    int month;
    int day;
    int year;
} Date; //新名字
*/

/*
typedef struct {
    int month;
    int day;
    int year;
} Date; //表示原先是一个没有名字的，现在自己定义了一个新的名字
*/

/*
如果结构体是指针类型，使用内部属性时可以用 -> , 比如p->next
如果结构体只是普通类型，使用内部属性时只能用. , 比如S.length
*/

int main()
{
    printf("Hello World!\n");
    return 0;
}