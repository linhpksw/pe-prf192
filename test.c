#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100] = "Python 123@@";

    int i, alphaCount = 0, digitCount = 0, punctCount = 0;

    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            alphaCount++;
        } else if (isdigit(str[i])) {
            digitCount++;
        } else {
            punctCount++;
        }
    }

    printf("%d %d %d", alphaCount, digitCount, punctCount);

    return 0;
}
