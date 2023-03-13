#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 500

void join(char arr[][MAX_LENGTH], char separator[], char res[]);

int main() {
    char arr[][MAX_LENGTH] = {"Banana", "Orange", "Apple", "Mango"};
    char res[100];

    join(arr, "_", res);

    printf("%s", res);

    return 0;
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
