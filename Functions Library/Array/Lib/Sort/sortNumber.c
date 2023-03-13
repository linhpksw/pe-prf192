#include <stdio.h>
#include <stdlib.h>

// To make this fuction sort array in descending order, change '>' in line 11 to '<'
void selectionSort(float arr[], int size);

int main() {
    float arr[] = {175.62, 252.02, 293.33, 14.47};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    int i;
    for (i = 0; i < size; i++) {
        printf("%g ", arr[i]);
    }

    return 0;
}

void selectionSort(float arr[], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                float mid = arr[j];
                arr[j] = arr[i];
                arr[i] = mid;
            }
        }
    }
}
