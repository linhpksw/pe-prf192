#include <stdio.h>
#include <stdlib.h>

// To make this fuction sort array in descending order, change '>' in line 19 to '<'
// For bigger amounts of number in array, change array size in line 6 and 31
void mergeArray(float a[], int start, int mid, int end)
{
    int i, j, k;
    int sizeL = mid - start + 1;
    int sizeR = end - mid;

    float L[sizeL], R[sizeR];
    for (i = 0; i < sizeL; i++)
    {
        L[i] = a[start + i];
    }
    for (i = 0; i < sizeR; i++)
    {
        R[i] = a[mid + 1 + i];
    }

    i = 0;
    j = 0;
    k = start;
    while (i < sizeL && j < sizeR)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < sizeL)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < sizeR)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(float a[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = start + (end - start) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        mergeArray(a, start, mid, end);
    }
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 216.77, 46.77, 107.36, 168.71, 97.16, 91.67};
    int size = sizeof(a) / sizeof(float);
    mergeSort(a, 0, size - 1);

    int i;
    for (i = 0; i < size; i++) // result: sorted array in ascending order
        printf("%g ", a[i]);
    printf("\n");
    system("pause");
    return 0;
}
