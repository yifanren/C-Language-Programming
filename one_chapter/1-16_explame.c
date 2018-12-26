/*
 *字符数组，获取最长的行，并打印出来。
 * */

#include <stdio.h>
#define MAXLINE 100

int myGetLine(char line[]) {
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

int getLine(char line[]) {
    int c, i = 0;

    for(i; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = '\n';
        i++;
    }

    line[i] = '\0';
    return i;
}



//数组的复制， 要循环一个一个赋值。
//字符串可以根据最后的\0 来判断结尾
void copy(char *to, char *from) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        i++;
}

int main(void)
{
    int len, maxlen = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getLine(line)) > 0) {
        if (maxlen < len) {
            maxlen = len;
            copy(longest, line);
        }
    }

    if (maxlen > 0)
        printf("longest line = [%s], maxlen = %d\n", longest, maxlen);

    return 0;
}
