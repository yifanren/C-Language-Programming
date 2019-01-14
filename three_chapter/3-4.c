/*
 * 得到：
 * 1. int型取值范围为：-2^31 —— 2^31-1;
 * 2. 应该注意到边界问题，没有考虑好的话，后期容易造成大的影响;
 * 3. int to char (n%10 + '0');
 *
 * */
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

// Itoa 获取int每位上的数存进数组，组成字符串
// @1. 在ASCII中 数字0-9的字符为48-57。
//     所以在n%10 + ‘0’可以将整形变为字符型数字n。
// @2. 判断是否为负数
// @3. 在n = 最大负值时，-n越界了，会报错。
void mitoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0)
        n = -n; // @3

    i = 0;
    do {
        s[i++] = n % 10 + '0'; // @1
    } while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-'; // @2
    s[i] = '\0';
    reverse(s);
}

void nitoa(int n, char s[]) {
    int i, sign;

    sign = n;
    i = 0;

    do {
        s[i++] = abs(n%10) + '0'; // Fix @3
    } while((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int main(void)
{
    int n = -2147483648;
    char s[30];

    nitoa(n, s);
    printf("s = %s\n", s);

    return 0;
}
