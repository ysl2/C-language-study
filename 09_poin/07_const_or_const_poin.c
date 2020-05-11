#include <stdio.h>

//const指针

/*
注意以下区别：
    case1: q是const。q的值不能被改变，就是q指向i这个事实不能被改变。也就是q不能再指向别人了
        int *const q = &i; //表示一旦得到了某个变量的地址，不能再指向其他变量
        *q = 26 //可以，改变的是指向的值，没有改变地址
        q++ //错误，q被重新赋值
    case2: (*p)是const。表示不能通过这个指针去修改那个变量（并不能使得那个变量成为const）
        int const *p = &i; //表示p的值不能被改变。即只能被赋予地址一次，一旦被赋予地址，不能二次修改
        const int *p = &i; //(*p)是const。表示不能通过p给i赋值，指二者相连的路径被切断，但是p和i都可以被赋予新的值
            *p = 26; //错误，(*p)是const
            i = 26; //OK
            p = &j; //OK
    总结：
        case1：指针不能修改
        case2：通过指针不能修改
注意以下区别：判断哪个被const了的标志是const在*的前面还是后面
    int i;
    const int* p1 =&i; //对应上述case2。(*p1)是const。与下面这一种意思一样，表示路径被切断
    int const* p2= &i; //对应上述case2。和上面这条一样。
    int *const p3=&i; //对应上述case1。p3是const。const在*的后面，表示指针不能被修改
*/

/*
总是可以把一个非 const的值转换成 const的
void f (const int* x);
int a = 15;
f(&a); //ok
const int b = a;

f(&b); //ok
b = a + 1; //Error
当要传递的参数的类型比地址大的时候(比如需要传一个结构体进去)，这是常用的手段：既能用比较少的字节数传递值给参数，又能避免函数对外面的变量的修改
*/

/*
const数组
    const int a[] = {1, 2, 3, 4, 5, 6};
    数组变量已经是const的指针了，这里的const
    表明数组的每一个单元都是const int
    所以必须通过初始化进行赋值
    可以用于保护数组值。比如：
        把数组传入函数的时候传递是地址，所以那个函数内部可以修改数组的值
        为了保护数组不被函数破坏，可以设置参数为const
        int sum(const int a[], int length);
*/

int main()
{
    printf("Hello World!\n");
    return 0;
}