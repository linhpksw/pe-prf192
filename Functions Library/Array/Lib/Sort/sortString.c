#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_ELEMENT 4

// To make this fuction sort array in descending order, change '>' in line 32 to '<'

void sortString(char arr[][MAX_LENGTH]);
int stringLength(char arr[][MAX_LENGTH]);

int main() {
    char arr[][MAX_LENGTH] = {"cherry", "orange", "apple", "oyster"};

    sortString(arr);

    int i;
    for (i = 0; i < 4; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}

void sortString(char arr[][MAX_LENGTH]) {
    int i, j, size = stringLength(arr);
    char temp[MAX_LENGTH];

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
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
