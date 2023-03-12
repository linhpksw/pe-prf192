#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLowerCase(char str[]);

int main() {
    char str[] = "UPPERWORD";
    toLowerCase(str);

    printf("%s", str);

    return 0;
}

void toLowerCase(char str[]) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}