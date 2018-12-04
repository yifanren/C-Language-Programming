/*
 *验证getchar() != EOF 的值是 0 还是 1
 *结果: 1
 *
 * */

#include <stdio.h>

int main(void)
{
    int c ;

    //!= 的优先级要高于 =
    while (c = (getchar() != EOF))
        //1
        //两个白的方框
        //putchar(c);
        printf("c = %d\n", c);
        //不管输入的是任何字符，输出结果都是相同的。
        //会打印出两次 c = 1
        //原因是：getchar 时回车键也算一次字符的输入

    return 0;
}
