#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numberLength(int arr[]);

int main() {
    int arr[] = {-1, 5, 6, 8};

    printf("%d", numberLength(arr));

    return 0;
}

int numberLength(int arr[]) {
    return sizeof(arr) / sizeof(int);
}
