#include <stdio.h>
#include <string.h>

#define MAXLINE 100

int getLine(char line[]) {
    char c;
    int i = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            continue;
        }
        else {
            if (i == (MAXLINE - 1)) {
                printf("overflow MAXLINE \n");
                break;
            }
            line[i++] = c;
        }

    }
    line[i] = '\0';
    return i;
}

int main(void)
{
    int len, max = 0;
    char line[MAXLINE];

    if ((len = getLine(line)) > 0)
        printf("line = %s\n", line);


    return 0;
}
