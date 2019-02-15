#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLINE 100

double atof(char s[]) {
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-' ? -1 : 1);
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
       val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}

int mgetline(char line[], int max) {
    int ret = -1;
    int len = strlen(line);

    if (len <= max)
        ret = len;
    else
        printf("over MAXLINE\n");

    return ret;
}

int main(void)
{
    char line[MAXLINE];

    double sum = 0;
    printf("please input double number:\n");
    scanf("%s", line);
    if (mgetline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    return 0;
}
