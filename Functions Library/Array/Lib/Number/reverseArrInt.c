#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf (line 18)
void revArrInt(int newArr[], int arr[], int size);

int main()
{
    int arr[] = {1, 2, 3, 4};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int newArr[sizeArr];
    revArrInt(newArr, arr, sizeArr);

    int i;
    for (i = 0; i < sizeArr; i++)
    {
        printf("%d ", newArr[i]);
    }
    system("pause");
    return 0;
}

void revArrInt(int newArr[], int arr[], int size)
{
    int i, j = size - 1;
    for (i = 0; i < size; i++)
    {
        newArr[j] = arr[i];
        j--;
    }
}