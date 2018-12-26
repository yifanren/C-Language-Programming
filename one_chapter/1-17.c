/*
 *字符数组，获取最长的行，并打印出来。
 * */

#include <stdio.h>
#include <string.h>

#define MAXLINE 100

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

//二维数组中的一维数组是一个数组指针。
int copy(char (*to)[], char *from, int max) {
    strcpy(*to, from);
    max++;
    return max;
}

int main(void)
{
    int len, max = 0;
    char line[MAXLINE];
    char longest[MAXLINE][MAXLINE];

    while ((len = getLine(line)) > 0) {
        if (len > 5) {
            max = copy(&longest[max], line, max);
        }
    }
    printf("There are %d more than 5, there are :\n", max);

    for (int i = 0; i < max; i++)
        printf("%s \n", longest[i]);

    return 0;
}
