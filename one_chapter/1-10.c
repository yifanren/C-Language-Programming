#include <stdio.h>

int main(void)
{
    char data;

    while((data = getchar()) != EOF) {
        // 制表符在键盘上是tab 键
        if (data == '\t')
            printf("\\t");
        // 退格键在键盘上是backspace 键
        else if (data == '\b')
            printf("\\b");
        else if (data == '\\')
            printf("\\\\");
        else
            putchar(data);
    }
    return 0;
}
