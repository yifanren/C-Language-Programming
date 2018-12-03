#include <stdio.h>

int main(void)
{
    float fahr, celsius;

    for (celsius = -17.8; celsius <= 148;) {
        fahr = celsius * 9 / 5 + 32;
        printf("%5.1f\t%3.0f\n", celsius, fahr);
        celsius += 11;
    }

    return 0;
}
