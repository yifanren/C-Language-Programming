#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF) {
        ++nc;  //all char
        if (c == '\n')
            ++nl; // \n count
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT; //
        else if (state == OUT) {
            state = IN;
            ++nw; //其他的转义字符
        }
    }

    printf("%d, %d, %d\n", nl, nw, nc);
    return 0;
}
