#include <stdio.h>

/*
putchar(int c):向标准输出写一个字符
返回写了几个字符，EOF(-1)表示写失败

getchar(void):从标准输入读入一个字符
返回类型是int是为了返回EOF(-1)
windows -> ctrl + Z
unix -> ctrl + D

size_t strlen(const char *s):返回字符串长度（不包括结尾的0）

int strcmp(const char *s1, const char *s2):比较两个字符串，返回：
0:s1 == s2
1:s1 > s2
-1:s1 < s2
安全版本：int strncmp(const char *s1, const char *s2, size_tn);

char * strcpy(char *restrict dst, const char *restrict src):把src的字符串拷贝到dst
restrict表明src和dst不重叠(c99)
返回dst
为了能链起代码来
例子：复制一个字符串
char *dst = (char *)malloc(strlen(src) + 1);
strcpy(dst, src);
安全版本: char * strncpy(char * restrict dst, const char * restrict src, size_tn);

char * strcat(char * restrict s1, const char * restrict s2);
把说拷贝到s1的后面，接成一个长的字符串
返回s1
s1必须有足够的空间
安全版本: char * strncat(char * restrict s1, const char * restrict s2, size_tn);

寻找单个字符：
char * strchr(const char *s, int c);从左边开始找，返回指针
char * strrchr(const char *s, int c);从右边开始找，返回指针
返回NULL表示没有找到

寻找字符串：
char * strstr(const char *s1, const char *s2);
char * strcasestr(const char *s1, const char *s2);
*/

int main()
{
    printf("Hello World!\n");
    return 0;
}