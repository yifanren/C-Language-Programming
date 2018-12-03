#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("华氏温度 - 摄氏温度\n对照表:\n");
    while(fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%5.0f\t%10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
