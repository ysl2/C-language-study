#include <stdio.h>

//将数字逆序
//通过%运算，将最低位数字取出
//通过/运算，将最低位数字剔除
//反复进行，拿到每一位数字
int main()
{
    int x = 700;
    // scanf("%d", &x);
    int ret = 0;
    while (x > 0)
    {
        //下面有两种结果
        //打开1，关闭2：得到的结果是007。但结果不是int型
        //打开2， 关闭1：得到的结果是7。结果是int型
        int digit = x % 10;
        //1
        printf("%d", digit);
        ret = ret * 10 + digit;
        //2
        //printf("x = %d, digit = %d, ret = %d\n", x, digit, ret);
        x /= 10;
    }
    //2
    //printf("%d", ret);
    return 0;
}