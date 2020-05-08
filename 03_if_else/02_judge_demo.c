#include <stdio.h>

int main() {
    //比较运算的结果：1或0
    //比较运算符的优先级比赋值的优先级低
    printf("%d\n", 5 == 3); //0
    printf("%d\n", 5 <= 3); //0
    printf("%d\n", 5 > 3); //1
    printf("%d\n", 7 >= 3 + 4); //1
    //在比较运算符中，==的优先级比其他的更低
    printf("%d\n", 5 > 3 == 6 > 4); //1
    return 0;
}