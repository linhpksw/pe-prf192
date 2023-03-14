#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf (line 22)

// Use: deleteInt() removes elements at the position you want (start = position start acting delete, length = amount of elements)

void deleteInt(int arr[], int sizeArr, int start, int length);

int main() {
    int arr[] = {1, 2, 3, 4};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int start = 0;   // this is the start index you want to delete
    int length = 7;  // this is the amount of elements you want to delete

    deleteInt(arr, sizeArr, start, length);  // after this, sizeArr will still keep the old value

    int i;

    if (length >= sizeArr) {
        for (i = 0; i < sizeArr; i++) {
            printf("%d ", arr[i]);
        }

    } else {
        for (i = 0; i < sizeArr - length; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

void deleteInt(int arr[], int sizeArr, int start, int length) {
    // If start is out of bounds, do nothing
    if (start < sizeArr) {
        // If length is out of array size, set it to array size
        if (length >= sizeArr) {
            length = sizeArr;
        }

        int i;
        for (i = start; i < start + length; i++) {
            arr[i] = arr[i + length];
        }
        for (i = start + length; i < sizeArr; i++) {
            arr[i] = 0;
        }
    }
}