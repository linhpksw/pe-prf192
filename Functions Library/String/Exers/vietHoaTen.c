#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

void split(char c[], char delimiter, char arr[][MAX_LENGTH]);
int stringLength(char arr[][MAX_LENGTH]);
void join(char arr[][MAX_LENGTH], char separator[], char res[]);

int main() {
    char str[] = "nguyen van a hung day";

    char arr[MAX_ELEMENT][MAX_LENGTH];
    char res[MAX_LENGTH];

    split(str, ' ', arr);
    int size = stringLength(arr);

    int i = 0;
    for (i = 0; i < size; i++) {
        arr[i][0] = toupper(arr[i][0]);
    }

    join(arr, "_", res);

    printf("%s", res);

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

void join(char arr[][MAX_LENGTH], char separator[], char res[]) {
    int i, j = 0;

    // Copy first string into res
    strcpy(res, arr[0]);
    j += strlen(arr[0]);

    // Append remaining strings with separators
    for (i = 1; i < 4; i++) {
        strcat(res + j, separator);
        j += strlen(separator);
        strcat(res + j, arr[i]);
        j += strlen(arr[i]);
    }
}