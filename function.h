#include <ctype.h>
#include <stdio.h>

void push(double f);

/**
 * brief: pop out stack
 */
double pop(void);

/**
 * brief: get a character
 */
int getch(void);

void ungetch(int c);

/**
 * brief: get next operator or character
 */
int getop(char []);

/**
 * \brief      Obtain line length.
 * \param s    Point to getchar data.
 * \param lim  S exist max length.
 */
int mgetline(char s[], int lim);

/**
 * \bried      The first occurrence of str1 in the str.
 * \param str  string str.
 * \param str1 substring str1.
 */
int strindex(char str[], char str1[]);















