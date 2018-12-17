#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
    int c, state = OUT;

    // \r 回车键
    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t')
            if (state == IN) {
                 putchar('\n');
                 state = IN;
            }
        else if (state == OUT) {
            state = IN;
            putchar(c);
        }
        else
            putchar(c);
    }

    return 0;
}
