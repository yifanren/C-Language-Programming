/*
 * AUTHOR: Renyifan
 * DATE  : 2019 - 01 - 02
 *
 * */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    signed char a = 'a';
    unsigned char b = 'b';
    signed short d = 'd';
    unsigned short c = 'c';
    signed int e = 'e';
    unsigned int f = 'f';
    signed long g = 'g';
    unsigned long h = 'h';




    // use the defines in limit.h
    printf("signed char limit min : %d\n", SCHAR_MIN);
    printf("signed char limit max : %d\n", SCHAR_MAX);
    printf("unsigned char limit max : %d\n", UCHAR_MAX);
    printf("signed short limit min : %d\n", SHRT_MIN);
    printf("signed short limit max : %d\n", SHRT_MAX);
    printf("unsigned short limit max : %d\n", USHRT_MAX);
    printf("signed int limit min : %d\n", INT_MIN);
    printf("signed int limit max : %d\n", INT_MAX);
    printf("unsigned int limit min : %d\n", UINT_MAX);
    printf("signed long limit min : %ld\n", LONG_MIN);
    printf("signed long limit min : %ld\n", LONG_MAX);
    printf("unsigned long limit min : %lu\n", ULONG_MAX);




    return 0;
}
