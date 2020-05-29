#include <stdio.h>

//小技巧：自动计数的枚举类

enum COLOR
{
    RED,
    YELLOW,
    GREEN,
    NumCOLORS //只要在后面跟一个这个，因为下标是3，就能表示前面有3个枚举类型的值
};

int main(int argc, char const *argv[])
{
    int color = -1;
    char *ColorNames[NumCOLORS] = {"red", "yellow", "green"};
    char *colorName = NULL;
    printf("输入你喜欢颜色的代码：");
    scanf("%d", &color);
    if (color >= 0 && color < NumCOLORS) {
        colorName = ColorNames[color];
    }else
    {
        colorName = "unknown";
    }
    printf("你喜欢的颜色是%s\n", colorName);
    return 0;
}