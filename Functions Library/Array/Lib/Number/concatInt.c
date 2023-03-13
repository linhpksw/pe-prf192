#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_ELEMENT 20

// Use: concatInt() concatenates two arrays into one array

void concatInt(int arr1[], int arr2[], int res[], size_t size1, size_t size2, size_t total);

int main() {
    int arr1[] = {1, 2};
    int arr2[] = {3, 4, 5, 7, 8, 9};

    size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
    size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
    size_t total = size1 + size2;

    int res[total];

    concatInt(arr1, arr2, res, size1, size2, total);  // concatInt will append arr2 into arr1

    int i;
    for (i = 0; i < total; i++) {
        printf("%d ", res[i]);  // {1, 2, 3, 4, 5};
    }

    return 0;
}

void concatInt(int arr1[], int arr2[], int res[], size_t size1, size_t size2, size_t total) {
    int i;
    for (i = 0; i < total; i++) {
        if (i < size1) {
            res[i] = arr1[i];
        } else {
            res[i] = arr2[i - size1];
        }
    }
}
