#include <stdio.h>

//%f的格式化输出
int main()
{
    printf("%.3f\n", -0.0049);
    printf("%.30f\n", -0.0049);
    printf("%.3f\n", -0.00049);
    return 0;
}