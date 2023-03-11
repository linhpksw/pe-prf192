#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[], int* count);

int main() {
    char c[] = "JS_Java_Python";
    char delimiter = '_';
    char* arr[10];  // Maximum number of tokens
    int count = 0;
    int i;

    split(c, delimiter, arr, &count);

    for (i = 0; i < count; i++) {
        printf("%s ", arr[i]);  // ["JS", "Java", Python]
    }

    return 0;
}

void split(char c[], char delimiter, char* arr[], int* count) {
    char* token;
    int i = 0;

    token = strtok(c, &delimiter);

    while (token != NULL) {
        arr[i++] = token;
        token = strtok(NULL, &delimiter);
    }

    *count = i;
}
