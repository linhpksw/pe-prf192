#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf (line 21)

// Use: popInt() removes the last element of an array

void popInt(int arr[], int newArr[], int sizeArr);

int main()
{
    int arr[] = {1, 2, 3, 4};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int newArr[sizeArr - 1];
    popInt(newArr, arr, sizeArr);

    int i;
    for (i = 0; i < sizeArr - 1; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}

void popInt(int newArr[], int arr[], int sizeArr)
{
    int i;
    for (i = 0; i < sizeArr - 1; i++)
    {
        newArr[i] = arr[i];
    }
}