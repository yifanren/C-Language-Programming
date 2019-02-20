/**
 * function: getop
 */

#include <ctype.h>
#define MAXVAL 100
#include <stdio.h>

#if 0
int sp = 0;
double val[MAXVAL];

/**
 * brief: push value to stack
 */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/**
 * brief: pop out stack
 */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/**
 * brief: get a character
 */
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= MAXVAL)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/**
 * brief: get next operator or character
 */
int getop(char [])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;

    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;

    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;

    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

#endif
/**
 * \brief      Obtain line length.
 * \param s    Point to getchar data.
 * \param lim  S exist max length.
 */
int mgetline(char s[], int lim)
{
    int c, i = 0;

    //while (lim-- > 0 && c = getchar() != EOF && c != '\n')
    //can't use lim--, because need leave to '\0'.
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return i;
}

/**
 * \bried      The first occurrence of str1 in the str.
 * \param str  string str.
 * \param str1 substring str1.
 */
int strindex(char str[], char str1[])
{
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        for (j=i, k=0; str1[k] != '\0' && str[j] == str1[k]; j++, k++)
            ;

        if (k > 0 && str1[k] == '\0')
            return i; //i = start postion, k = end position.
    }

    return -1;
}















