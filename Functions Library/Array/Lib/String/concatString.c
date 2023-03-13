#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use: concatString() concatenates two arrays into one array

#define MAX_LENGTH 100
#define MAX_ELEMENT 20

void concatString(char arr1[][MAX_LENGTH], char arr2[][MAX_LENGTH], char res[][MAX_LENGTH]);
int stringLength(char arr[][MAX_LENGTH]);

int main() {
    char arr1[MAX_ELEMENT][MAX_LENGTH] = {"A", "B"};
    char arr2[MAX_ELEMENT][MAX_LENGTH] = {"C", "D", "E"};
    char res[MAX_ELEMENT][MAX_LENGTH];

    concatString(arr1, arr2, res);  // concatString will append arr2 into arr1

    int i;
    for (i = 0; i < 5; i++) {
        printf("%s ", res[i]);  // {"A", "B", "C", "D", "E"};
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

void concatString(char arr1[][MAX_LENGTH], char arr2[][MAX_LENGTH], char res[][MAX_LENGTH]) {
    int size1 = stringLength(arr1);  // 2
    int size2 = stringLength(arr2);  // 3
    int total = size1 + size2;

    int i;
    for (i = 0; i < total; i++) {
        if (i < size1) {
            strcpy(res[i], arr1[i]);
        } else {
            strcpy(res[i], arr2[i - size1]);
        }
    }
}
