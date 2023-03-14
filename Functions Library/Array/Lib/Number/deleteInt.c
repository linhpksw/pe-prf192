#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf (line 22)

// Use: deleteInt() removes elements at the position you want (start = position start acting delete, length = amount of elements)

void deleteInt(int arr[], int sizeArr, int start, int length);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int length = 2; // this is the amount of elements you want to delete

    deleteInt(arr, sizeArr, 3, length); // after this, sizeArr will still keep the old value

    int i;
    for (i = 0; i < sizeArr - length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void deleteInt(int arr[], int sizeArr, int start, int length)
{
    int i;
    for (i = start; i < start + length; i++)
    {
        arr[i] = arr[i + length];
    }
    for (i = start + length; i < sizeArr; i++)
    {
        arr[i] = 0;
    }
}