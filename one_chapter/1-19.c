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

void reverse(char* changeto, char* change) {
    int len = strlen(change);
    char *p = change;
    char *q = changeto;
    memset(changeto, 0, sizeof(changeto));

    for (int i = 0 ; i < len; i++) {
        *(q + i) = *(p + (len - 1 -i));
    }
}

int main(void)
{
    int len, max = 0;
    char line[MAXLINE];
    char changed[MAXLINE];

    while ((len = getLine(line)) > 0) {
        reverse(changed, line);
        printf("line = %s\n", line);
        printf("changed = %s\n", changed);
    }


    return 0;
}
