#include <stdio.h>
int main()
{
    int cm;
    scanf("%d", &cm);
    int foot = cm / 30.48;  //如果是java需要强制类型转换
    int inch = ((cm / 30.48) - foot) * 12;
    printf("%d %d\n", foot, inch);
    return 0;
}   