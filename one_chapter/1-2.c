/*
 *转义字符“\” ,
 *转移字符序列为表示无法输入的字符或者不可见的字符提供了一种通用的可扩充的机制。
 *
 *当字符序列中不存在的字符被转义后，打印出来的结果仍是该字符。
 */

#include <stdio.h>

int main()
{
    printf("hello, world\c");
    //hello, worldc

    printf("\a\b\c\d\e\f\g\h\j\k\l\m\n\o\p\q\n");
    //cd
    //  hjklm
    //opq

    //上面两条打印分别打印结果如上，同时打印结果如下
    //疑问：
    //两条语句中都有\c 为什么只打印出了一个c？
    //hjklm 前的间隔为什么不一样大？
    //
    //
    //hello, worldcd
    //              hjklm
    //opq
}
