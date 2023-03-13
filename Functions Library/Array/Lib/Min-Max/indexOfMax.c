#include <stdio.h>
#include <stdlib.h>

// Use: find index of maximum value in an array

int indexOfMax(float arr[], int size);

int main() {
    float arr[] = {175.62, 293.33, 14.44, 252.02};  // result: 1
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Max value index = %d\n", indexOfMax(arr, size));

    return 0;
}

int indexOfMax(float arr[], int size) {
    float max = arr[0];
    int i, maxIndex = 0;

    for (i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
