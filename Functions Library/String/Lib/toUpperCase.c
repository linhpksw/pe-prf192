#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpperCase(char str[]);

int main() {
    char str[] = "uppercase";
    toUpperCase(str);

    printf("%s", str);

    return 0;
}

void toUpperCase(char str[]) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}