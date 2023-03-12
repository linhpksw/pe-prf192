#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[]);

int main() {
    char str[] = "nguyen van a";

    char* arr[10];  // Maximum number of tokens
    int i = 0;

    split(str, ' ', arr);

    // for (i = 0; i < 4; i++) {
    //     printf("%s", );
    // }

    while (arr[i] != NULL) {
        printf("%s ", arr[i]);
        i++;
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
