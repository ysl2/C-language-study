#include <stdio.h>

//字符串的输入输出
//%s读的是一个单词，到空格，tab，或回车为止

/*
常见错误：

char string 
scanf ("%s", string)
以为char是字符串类型，定义了一个字符串类型的变量 string就可以直接使用了
而实际上，只是定义了一个字符型指针而已
由于没有对sng初始化为0，所以不一定每次运行都出错
*/

/*
注意以下二者区别：

1.空字符串： char buffer[100] = "";
这是一个空字符串，buffer[0] == '\0'

2.char buffer[] = "";
这个数组的长度只有1
*/

int main(void)
{
    char word[8];
    char word2[8];
    scanf("%7s", word); //限定系统最多只能读7个字符，保证下标安全
    scanf("%7s", word2);
    printf("%s##%s##\n", word, word2);
    return 0;
}