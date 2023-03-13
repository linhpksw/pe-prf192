#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_ELEMENT 20

void concat(int arr1[], int arr2[], int res[]);

int main() {
    char arr1[] = {1, 2};
    char arr2[] = {3, 4, 5};
    char res[MAX_ELEMENT];

    concat(arr1, arr2, res);  // concat will append arr2 into arr1

    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", res[i]);  // {1, 2, 3, 4, 5};
    }

    return 0;
}

void concat(int arr1[], int arr2[], int res[]) {
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
