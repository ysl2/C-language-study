#include <stdio.h>

//char与int在补码表现中，由于占用字节数不同而产生结果差异
int main()
{
    //char：11111111
    char c = 255;

    unsigned c1 = 255;  
    //unsigned意思是说，c不以二进制的补码来表示,没有负数部分，只有0和正数部分
    //sign char的范围：-128 ~ 127
    //unsighed char的范围：0 ~ 255
    //unsigned的初衷是为了做纯二进制运算，主要是为了移位
    //而不是为了扩展数能表达的范围
    //如果一个字面量常数想要表达自己是unsigned，可以在后面加u或U
    //用l或者L表示long(long)

    //int：00000000 00000000 00000000 11111111
    int i = 255;
    printf("c = %d, unsigned c1 = %d, i = %d\n", c, c1, i);
    return 0;
}