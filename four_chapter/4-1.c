#include <stdio.h>
#define MAXLINE 1000

char pattern[] = "ould";

int mgetline(char s[], int lim) {
    int c, i;
    i = 0;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

int strrindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return j;
    }

    return -1;
}

int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while (mgetline(line, MAXLINE) > 0) {
        if ((found = strrindex(line, pattern)) >= 0) {
            printf("%s", line);
        }
        printf("found = %d\n", found);
    }

    return 0;
}
