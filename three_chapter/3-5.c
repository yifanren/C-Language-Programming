/*
 * 得到：
 * 1. 十进制数转十六进制数
 * 除16取余数，然后把商继续除得第2位，直到商等于0。从下往上取数。
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Reverse change start to end
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itob(int n, char *s, int b) {
    int i, sign;

    sign = n;
    i = 0;

    do {
            s[i++] = abs(n%b) + '0';
    } while((n /= b) != 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int main(void)
{
    char s[100];
    int n, b;

    printf("Please enter a number and swap number:\n");
    scanf("%d%d", &n, &b);

    itob(n, s, b);
    printf("s = %s\n", s);

    return 0;
}
