#include <stdio.h>
#include <stdlib.h>

// Use: find index of minimum value in an array

int indexOfMin(float arr[], const int size);

int main() {
    float arr[10] = {175.62, 252.02, 293.33, 14.47};  // result: 3
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("min value index = %d\n", indexOfMin(arr, size));

    return 0;
}

int indexOfMin(float arr[], const int size) {
    float min = arr[0];
    int minIndex = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}