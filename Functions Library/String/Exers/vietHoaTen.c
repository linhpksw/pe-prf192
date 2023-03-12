#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

void split(char c[], char delimiter, char arr[][MAX_LENGTH]);
int stringLength(char arr[][MAX_LENGTH]);

int main() {
    char str[] = "nguyen van a hung";
    char arr[MAX_ELEMENT][MAX_LENGTH];

    split(str, ' ', arr);
    int size = stringLength(arr);

    int i = 0;
    for (i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

int stringLength(char arr[][MAX_LENGTH]) {
    int i, size = 0;

    for (i = 0; i < MAX_ELEMENT; i++) {
        if (strlen(arr[i]) > 0) {
            size++;
        }
    }

    return size;
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
