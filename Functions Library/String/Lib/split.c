#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[]);

int main() {
    char c[] = "JS_Java_Python";

    char* arr[20];  // Maximum number of tokens (tokens are result in each loop)
    int i;

    split(c, '_', arr);  // return pointer array ["JS", "Java", Python]

    for (i = 0; i < 3; i++) {
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
