#include <stdio.h>

//计算一组数的平均数，并将所有大于平均数的数字输出（-1为退出循环标记）
//用数组存数字

//segmentation fault: 数组下标越界
//编译器不会去检查数组下标是否越界，但是一旦发生越界可能会发生严重的后果

int main()
{
    int number = 0;
    int sum = 0;
    int count = 0;
    int numberArray[100]; //定义数组
    //在C99之前，元素数量必须是编译时刻确定的字面量
    while (count < 100)
    {
        scanf("%d", &number);
        if (number == -1)
        {
            break;
        }
        numberArray[count] = number;
        sum += number;
        count++;
    }
    if (count <= 0)
    {
        return 0;
    }
    printf("%f\n", 1.0 * sum / count);
    for (int i = 0; i < count; i++)
    {
        if (numberArray[i] > sum / count)
        {
            printf("%d\n", numberArray[i]);
        }
    }
    return 0;
}