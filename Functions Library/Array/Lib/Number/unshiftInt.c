#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf (line 21)

// Use: unshift() adds new elements to the beginning of an array

void unshiftInt(int arr[], int newArr[], int sizeArr, int num);

int main()
{
    int arr[] = {1, 2, 3, 4};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int newArr[sizeArr + 1];
    unshiftInt(newArr, arr, sizeArr, 5);

    int i;
    for (i = 0; i < sizeArr + 1; i++)
    {
        printf("%d ", newArr[i]);
    }

    system("pause");
    return 0;
}

void unshiftInt(int newArr[], int arr[], int sizeArr, int num)
{
    int i;
    for (i = 0; i < sizeArr; i++)
    {
        newArr[i + 1] = arr[i];
    }
    newArr[0] = num;
}