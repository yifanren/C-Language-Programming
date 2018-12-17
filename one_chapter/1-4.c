#include <stdio.h>

int main(void)
{
    float fahr, celsius;

    for (celsius = -17.8; celsius <= 148;) {
        //考虑到fahr 是小数
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%5.1f\t%3.0f\n", celsius, fahr);
        celsius += 11;
    }

    return 0;
}
