#include <stdio.h>

#define DATALENGTH 5

int main(void)
{
    char c;
    char data[DATALENGTH] = {'\n'};
    int i = 0;


    for (i; i < DATALENGTH; i++) {
        if ((c = getchar()) != EOF) {
            if (c != '\n')
                data[i] = c;
            else
                continue;
        }
        else {
            printf("bye!");
            break;
        }
    }

    for (i = 0; i< DATALENGTH; i++)
        printf("data = %c\n", data[i]);
    return 0;
}
