/*
 *字符数组，获取最长的行，并打印出来。
 * */

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
#define LONGLINE 80

int getLine(char line[]) {
    char c;
    int i = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            break;
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
    char longest[MAXLINE][MAXLINE];

    while ((len = getLine(line)) > 0) {
        if (len > LONGLINE) {
            printf("%s \n", line);
        }
    }

    return 0;
}
