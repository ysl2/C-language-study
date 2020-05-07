#include <stdio.h>
//运算符优先级
//求平均值
int main() {
    int a, b;
    //注意：scanf后边是有&的，而printf后边则没有
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%d和%d的平均值=%f\n", a, b, c);
    //赋值也是运算,也有结果  
    //a=6的结果是a被赋予的值,也就是6  
    //a=b=6->a=(b=6)
    //嵌入式赋值：
    //int c = 1 + (b = a)不利于阅读，容易产生错误
    int i = 8;
    i += 5; //复合赋值
    i++; //递增递减运算符 i++与++i不同
}