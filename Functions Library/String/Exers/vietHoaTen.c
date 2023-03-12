#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char c[], char delimiter, char* arr[]);

int main() {
    char str[] = "nguyen van a";
    char temp[20];

    char* arr[10];  // Maximum number of tokens
    int i = 0;

    split(str, ' ', arr);

    while (arr[i] != NULL) {
        strcpy(temp, arr[i]);

        temp[0] = toupper(temp[0]);

        printf("%s ", temp);
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
