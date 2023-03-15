#include <stdio.h>
#include <stdlib.h>

// To make this function work with float/double type, change all variables type to float/double EXCEPT 'i' and 'sizeArr'
// Also remember to change %d to %f or %lf

// Use: deleteInt() removes elements at the position you want (start = position start acting delete, length = amount of elements)

void deleteInt(int arr[], int sizeArr, int start, int length);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int start = 2;  // this is the start index you want to delete
    int length = 7; // this is the amount of elements you want to delete

    deleteInt(arr, sizeArr, start, length); // after this, sizeArr will still keep the old value

    int i;

    if (length >= sizeArr) // If length is out of array size, print only the first value to the 'start-1' value
    {
        for (i = 0; i < start; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else // If length is not out of array size, print normally with new size = sizeArr - length
    {
        for (i = 0; i < sizeArr - length; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

void deleteInt(int arr[], int sizeArr, int start, int length)
{
    int flag = 0;

    // If start is out of bounds, do nothing
    if (start < sizeArr)
    {
        if (length <= sizeArr - start)
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
        else // If length is out of array size, delete all elements from 'start' to the end of array
        {
            int i;
            length = sizeArr - start;
            for (i = start; i < start + length; i++)
            {
                arr[i] = 0;
            }
        }
    }
}