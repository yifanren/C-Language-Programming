#include <stdio.h>
#include <string.h>

// Delete s2 from s1
void squeeze2(char *s1, char *s2) {
    int i, j, k;

    for (i = 0, k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;

        if (s2[j] == '\0')
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main(void)
{
    char s1[10] = "abcde";
    char s2[10] = "acd";

    printf("s1 = %s\n", s1);
    squeeze2(s1, s2);
    printf("s1 = %s\n", s1);

    return 0;
}
