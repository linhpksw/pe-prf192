#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// d = 1: the number is float; d = 0: the number is integer
// NOTE: you have to define <string.h> from above
int isIntOrFloat(char input[30]) {
    int i;
    int d = 0;

    for (i = 0; i < strlen(input); i++)
        if (input[i] - '0' == -2) {
            d++;
            break;
        }
    return d;
}

int main() {
    char num[30] = "235.642";  // result: FLOAT!
    if (isIntOrFloat(num))
        printf("FLOAT!\n");
    else
        printf("INTEGER!\n");

    system("pause");
    return 0;
}
