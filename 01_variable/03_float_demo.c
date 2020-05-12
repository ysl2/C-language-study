#include <stdio.h>

//浮点数
int main()
{
       printf("请分别输入身高的英尺和尺寸, \ 
如输入\"5 7\"表示5英尺7英寸"); //注意连接两个字符串的\符号
       int foot;
       int inch;

       scanf("%d %d", &foot, &inch);
       //小数部分截断
       //解决办法：
       //①除以12.0（变成浮点数）
       //②把inch的类型换成double，相应格式字符串由%d变成%lf
       printf("身高是%f米。\n",
              ((foot + inch / 12) * 0.3048));
       return 0;
}