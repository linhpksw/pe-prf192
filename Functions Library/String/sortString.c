#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortWord(char* words[], int count);
void split(char c[], char delimiter, char* arr[], int* count);

int main() {
    char c[] = "anh_lung_la_day";
    char delimiter = '_';
    char* arr[10];  // Maximum number of tokens
    int count = 0;
    int i;

    split(c, delimiter, arr, &count);

    sortWord(arr, count);

    for (i = 0; i < count; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

void sortWord(char* words[], int count) {
    char* x;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            // change '<' to '>' to sort unalphabetical words
            if (strcmp(words[i], words[j]) > 0) {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }
    }
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