#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use: numberLength() calculate actual elements in an array of numbers

int main() {
    int arr[] = {-1, 5, 6, 8};

    printf("%d", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
