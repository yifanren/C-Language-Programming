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

void itoa(int n, char s[], int b) {
    int i, sign;

    sign = n;
    i = 0;

    do {
        s[i++] = abs(n%10) + '0'; // Fix @3
    } while((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';

    while (i < b)
        s[i++] = ' ';

    s[i] = '\0';
    reverse(s);
}

int main(void)
{
    int n, b;
    char s[30];

    printf("Please enter a number and swap number:\n");
    scanf("%d%d", &n, &b);

    itoa(n, s, b);
    printf("s = %s\n", s);

    return 0;
}
