#include <stdio.h>

//统计有多少个空格，制表符，换行符
int account(char *buf, char symbol) {
    char *p = buf;
    int  num = 0;

    while(*p) {
        if (*p == symbol)
            num++;
        p++;
    }

    return num;
}

int main(void)
{
    char buf[20] = "ad\tf a d\n\n\naadf";
    char symbol = '\n';

    int num = account(buf, symbol);
    printf("have \\n %d \n",  num);

    symbol = ' ';
    num = account(buf, symbol);
    printf("have spance %d \n",  num);

    symbol = '\t';
    num = account(buf, symbol);
    printf("have \\t %d \n",  num);

    return 0;
}
