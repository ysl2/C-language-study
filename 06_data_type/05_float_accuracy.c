#include <stdio.h>

//浮点数的精度
int main()
{
    float a, b, c;

    a = 1.345f;  
    //带小数点的字面量是double而不是float
    //float需要用f或F后缀来表明身份，否则就算之前声明的是float，依然会占double的字节数
    //由于float的精度有误差，因此不能用float去计算钱，否则小的误差会累积起来。
    //关于精度误差参考这篇文章：https://www.guokr.com/article/27173

    //java对于float和double有自动拆装箱
    b = 1.123f;
    c = a + b;
    if (c == 2.468)
    {
        printf("相等\n");
    }
    else
    {
        printf("不相等，c = %.10f，或%f\n", c, c);
    }
}