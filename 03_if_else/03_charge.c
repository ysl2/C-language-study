#include <stdio.h>

int main()
{
    int price = 0;
    int bill = 0;
    /*
        多行注释，C99独有的
    */
    //获取金额和票面
    printf("请输入金额：");
    scanf("%d", &price);
    printf("请输入票面：");
    scanf("%d", &bill);
    //计算找零
    if (bill >= price)
    {
        printf("应该找您：%d\n", bill - price);
    }
    return 0;
}