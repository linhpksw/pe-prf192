#include <stdio.h>
#include <stdlib.h>

float minElement(float arr[], int size);

int main() {
    float arr[] = {175.62, 252.02, 293.33, 14.47};  // result: 8.5

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Min value = %f\n", minElement(arr, size));

    return 0;
}

float minElement(float arr[], int size) {
    float min = arr[0];
    int i;
    for (i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
