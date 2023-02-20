#include <stdio.h>
#include <stdlib.h>

void mergeArray(float a[], int start, int mid, int end)
{
    int i;
    int j = 0;
    float L[100], R[100];

    int sizeL = mid - start + 2;
    int sizeR = end - mid + 1;
    for (i = 0; i < sizeL - 1; i++)
    {
        L[i] = a[start + i];
    }
    L[sizeL - 1] = 999999; // sentinel value
    for (i = 0; i < sizeR - 1; i++)
    {
        R[i] = a[mid + 1 + i];
    }
    R[sizeR - 1] = 999999; // sentinel value

    i = 0;
    j = 0;
    int k = start;
    while (k <= end)
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
