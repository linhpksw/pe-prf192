#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[]);

int main() {
    char str[] = "nguyen van a";

    char* arr[20];  // Maximum number of tokens
    int i;

    split(str, ' ', arr);

    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

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
