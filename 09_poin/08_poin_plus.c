#include <stdio.h>

//当我们给地址值+1的时候，实际上是sizeof加1
//也就是说，
//对于char类型的指针，如果将指针加1，对应地址会加1
//对于int类型的指针，如果将指针加1，对应的地址会加4
//如果在同一个数组的两个指针相减，得到的结果是中间夹着的元素的个数，而不是相差的地址数
//换句话说，两个指针做减法得到是 {地址 / sizeof} 的值

int main()
{
    char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
    char *p = &ac[0];
    int i;
    for (i = 0; i < sizeof(ac) / sizeof(ac[0]); i++)
        printf("%d\n", ac[i]);
    while (*p != -1)
        printf("%d\n", *p++);
    int ai[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *q = ai;
    return 0;
}