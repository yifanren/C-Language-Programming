/*
 * 得到：
 * 1. 对于数组的下标处理。需要考虑越界，及对应的值。
 * 2. 数字和字符都可以看做字符。
 * 3. 下标自加时，考虑是否还有其他地方用到了，会不会有错。
 *
 * */
#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int c, i, j;

    for(i = 0, j = strlen(s) -1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void expend(char* s1, char* s2) {
   int i, j, k;

   for (i = 0, k = 0, j = strlen(s1); s1[i] != '\0'; i++) {
       if (s1[0] == '-' && s2[0] != '-') {
           s2[k++] = s1[i];
           continue;
       }

       if (s1[j-1] == '-' && i == j-1) {
           s2[k++] = s1[i];
           break;
       }

       if (s1[i] != '-')
           s2[k++] = s1[i];
       else {
           while (s2[k-1] < s1[i+1]) {
               s2[k] = s2[k-1] + 1;
               k++;
           }
           i++;
       }
   }
   s2[k] = '\0';
}

int main(void)
{
    char s1[20] = "\0";
    char s2[100] = "\0";

    printf("please input string: (eg:a-z/0-9/-a-z/-a-z-/...)\n");
    scanf("%s", s1);

    expend(s1, s2);
    printf("allString = %s\n", s2);

    return 0;
}
