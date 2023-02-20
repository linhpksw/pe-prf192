#include <stdio.h>
#include <stdlib.h>

// To make this fuction sort array in descending order, change '>' in line 11 to '<'
// For bigger amounts of number in array, change array size in line 6 and line 21
void selectionSort(float a[10], const int size)
{
    int i, j;
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++)
            if (a[i] > a[j])
            {
                int mid = a[j];
                a[j] = a[i];
                a[i] = mid;
            }
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 216.77, 46.77, 107.36, 168.71, 97.16, 91.67};
    int size = sizeof(a) / sizeof(float);
    selectionSort(a, size);

    int i;
    for (i = 0; i < size; i++) // result: sorted array in ascending order
        printf("%g ", a[i]);
    printf("\n");

    system("pause");
    return 0;
}
