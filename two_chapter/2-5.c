/*
 * 查找字符串第一次出现的位置
 * 这道题中，我意识到
 * 1. 循环字符串可以判断最后一位为'\0'
 *    之前好像习惯找到字符串的长度，然后for循环到最后一位。
 * 2. && 条件与 可以解决繁琐的条件
 *
 * */

#include <stdio.h>

int any(char *s1, char *s2) {
    int ret = -1;
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
            ;

        if (s1[i] == s2[j]) {
            ret = i;
            break;
        }
    }

    return ret;
}


int main(void)
{
    char s1[10] = "abcefdag";
    char s2[10] = "da";

    printf("ret = %d\n", any(s1, s2));

    return 0;
}
