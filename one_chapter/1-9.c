#include <stdio.h>

int main(void)
{
    char data;

    while(1) {
        data = getchar();
        if (data == ' ') {
            putchar(data);
            while(1) {
                data = getchar();
                if (data != ' ')
                    break;
            }
        }
        putchar(data);
    }
    return 0;
}
