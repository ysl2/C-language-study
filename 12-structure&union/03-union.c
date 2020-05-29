#include <stdio.h>

//联合，会共享同一内存空间（也叫共用体）

// union AnEit {
//     int i;
//     char c;
// } eit1, eit2;


//使用场合，通过union得到数字的每一个字节
typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;

int main()
{
    CHI chi;
    int i;
    chi.i = 1234;
    for (i = 0; i < sizeof(int); i++)
    {
        printf("%02hhX", chi.ch[i]);
    }
    printf("\n");
    return 0;
}