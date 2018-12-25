#include <stdio.h>

#define OUT 0
#define IN  1
#define CHARACTER 24
#define MAXNUMBER 10
#define MAXHIST   15

int main(void)
{
    char allCharacter[CHARACTER] = {'\0'};
    int number[CHARACTER] = {0};
    char c;
    int i = 0;
    int len = 0;
    int temp = 0;
    int maxvalue = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            continue;
        }

        putchar(c);
        putchar('\n');
        for (i = 0; i < CHARACTER; i++) {
            if (c > allCharacter[i] && allCharacter[i] == 0) {
                allCharacter[i] = c;
                number[i] = 1;
            printf("allCharacter[i] = %c i = %d \n", allCharacter[i], i);
                break;
            }
            if (c < allCharacter[i]) {
                for (temp = i; temp < CHARACTER; temp++) {
                    if (allCharacter[temp] == '\0' && allCharacter[temp-1] != '\0') {
                        while ((temp-1) != i) {
                            allCharacter[temp] = allCharacter[temp-1];
                            temp--;
                        }
                        allCharacter[i] = c;
                    }
                }
            printf("allCharacter[i] = %c i = %d \n", allCharacter[i], i);
                break;
            }
            if (c == allCharacter[i]) {
                number[i]++;
            printf("allCharacter[i] = %c i = %d \n", allCharacter[i], i);
                break;
            }
            //printf("allCharacter[i] = %c i = %d \n", allCharacter[i], i);
        }
    }

    for (i = 0; i< CHARACTER; i++) {
        if (maxvalue < number[i])
            maxvalue = number[i];
    }

    for (i = MAXHIST; i > 0; i--) {
        if (number[i] > 0) {
            if ((len = number[i] * MAXHIST / maxvalue) >= i)
                printf("%4c", '*');
            else
                putchar(' ');
        }
    }

    putchar('\n');
    for (i = 0; i < CHARACTER; i++) {
        if (allCharacter[i] == '\0')
            break;
        printf("%4d", number[i]);
    }
    printf("\n");
    for (i = 0; i < CHARACTER; i++) {
        printf("%4c", allCharacter[i]);
    }
    printf("\n");

    return 0;
}
