#include <stdio.h>
#include <stdlib.h>

float maxElement(float arr[], int size);

int main() {
    float arr[] = {175.62, 252.02, 293.33, 14.47};  // result: 293.33
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Max value = %f\n", maxElement(arr, size));

    return 0;
}

float maxElement(float arr[], int size) {
    float max = arr[0];
    int i;
    for (i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}