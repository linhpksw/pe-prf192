#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// None-pointer version
#define MAX_ELEMENT 20
#define MAX_LENGTH 500

void split(char c[], char delimiter, char arr[][MAX_LENGTH]);

int main() {
    char c[] = "JS_Java_Python";
    char arr[MAX_ELEMENT][MAX_LENGTH];  // Maximum number of tokens (tokens are result in each loop)
    int i;

    split(c, '_', arr);  // return array ["JS", "Java", Python]

    for (i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

void split(char c[], char delimiter, char arr[][MAX_LENGTH]) {
    char* token;
    int i = 0;

    char delim[2] = {delimiter, '\0'};
    token = strtok(c, delim);

    for (i = 0; i < MAX_ELEMENT; i++) {
        arr[i][0] = '\0';
    }

    i = 0;
    while (i < MAX_ELEMENT && token != NULL) {
        strncpy(arr[i++], token, MAX_LENGTH - 1);
        token = strtok(NULL, delim);
    }
}