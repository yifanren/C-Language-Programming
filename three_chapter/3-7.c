#include <stdio.h>
#include <string.h>

// 对于处理掉连续的某些字符，可以用判断不是后退出
int trim(char s[]) {
   int n;

   for (n = strlen(s); n >= 0; n--)
       if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
           break;

   s[n+1] = '\0';
   return n;
}

int main(void)
{
    char s[20];

    printf("please input number:\n");
    scanf("%s", s);

    printf("%s have %d kongge\n", s, trim(s));


    return 0;
}
