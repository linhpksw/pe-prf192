#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use: reverseString() reverses the order of the elements in an array

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

void reverseString(char newArr[][MAX_LENGTH], char arr[][MAX_LENGTH]);
int stringLength(char arr[][MAX_LENGTH]);

int main() {
    char arr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3", "ele4"};
    char newArr[MAX_ELEMENT][MAX_LENGTH];

    reverseString(newArr, arr);

    int i;
    for (i = 0; i < stringLength(arr); i++) {
        printf("%s ", newArr[i]);
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

void reverseString(char newArr[][MAX_LENGTH], char arr[][MAX_LENGTH]) {
    int size = stringLength(arr);
    int i, j = size - 1;
    for (i = 0; i < size; i++) {
        strcpy(newArr[j], arr[i]);
        j--;
    }
}