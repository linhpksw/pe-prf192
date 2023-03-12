#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[]);

int main() {
    char str[] = "nguyen van a";

    char* arr[10];  // Maximum number of tokens
    int i;

    split(str, ' ', arr);

    for (i = 0; i < 3; i++) {
        printf("%s", arr[i]);
    }

    // while (arr[i] != ) {
    //     printf("%s ", arr[i]);
    // }

    return 0;
}

void split(char c[], char delimiter, char* arr[]) {
    char* token;
    int i = 0;

    token = strtok(c, &delimiter);

    while (token != NULL) {
        arr[i++] = token;
        token = strtok(NULL, &delimiter);
    }
}
