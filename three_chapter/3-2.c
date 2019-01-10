/*
 * 得到：
 * 1. 在switch中，语句中只有在case语句中有用。
 * 2. switch 和 case 中的都是常量值，也可以用字符。（字符有对应的十进制数）
 *
 * */
#include <stdio.h>
#include <string.h>

void escape(char* s, char* t) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++) {
            switch (t[i]) {
                case '\b':
                    s[j++] = '\\';
                    s[j++] = 'b';
                    break;
                case '\t':
                    s[j++] = '\\';
                    s[j++] = 't';
                    break;
                case '\n':
                    s[j++] = '\\';
                    s[j++] = 'n';
                    break;
                case '\r':
                    s[j++] = '\\';
                    s[j++] = 'r';
                    break;
                default:
                    s[j++] = t[i];
                    break;
            }
    }
    s[j] = '\0';
}

void reescape(char* s, char* t) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++) {
         if (t[i] == '\\' && t[i++] != '\0') {
             switch (t[i]) {
                 case 't':
                     t[i] = '\t';
                     break;
                 case 'n':
                     t[i] = '\n';
                     break;
                 case 'r':
                     t[i] = '\r';
                     break;
                 case 'b':
                     t[i] = '\b';
                     break;
                 case '\\':
                     t[i] = '\\';
                     break;
             }
         }
         s[j++] = t[i];
    }
    s[j] = '\0';
}


int main(void)
{
    char s[50];
    char t[50];

    memset(s, 0, 50);
    memset(t, 0, 50);
    for (int i = 0; i < 10 ; i++) {
         scanf("%c", &t[i]);
    }
    escape(s, t);
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    memset(s, 0, 50);
    reescape(s, t);
    printf("s = %s\n", s);

    return 0;
}
