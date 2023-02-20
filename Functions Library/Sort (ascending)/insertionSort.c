#include <stdio.h>
#include <stdlib.h>

// To make this fuction sort array in descending order, change '>' in line 19 to '<'
// For bigger amounts of number in array, change array size in line 6 and 31
void insertionSort(int arr[10], int n)
{
    int i, key, j;

    // 12, 11, 13, 5, 6
    // L1 (key = 11): 11, 12, 13, 5, 6
    // L2 (key = 13): 11, 12, 13, 5, 6
    // L3 (key = 5): 5, 11, 12, 13, 6

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 216.77, 46.77, 107.36, 168.71, 97.16, 91.67};
    int size = sizeof(a) / sizeof(float);
    insertionSort(a, size);

    int i;
    for (i = 0; i < size; i++) // result: sorted array in ascending order
        printf("%g ", a[i]);
    printf("\n");

    system("pause");
    return 0;
}
