#include <stdio.h>
#include <stdlib.h>

// Use: insertInt() inserts element(s) in a sub array to the original array

void insertInt(int arr[], int sizeArr, int newArr[], int size_newArr, int start);

int main()
{
    int arr[] = {1, 2, 3, 6, 7};
    int newArr[] = {4, 5};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int size_newArr = sizeof(newArr) / sizeof(arr[0]);

    insertInt(arr, sizeArr, newArr, size_newArr, 3);

    int i;
    for (i = 0; i < sizeArr; i++)
    {
        printf("%d ", arr[i]);
    }

    system("pause");
    return 0;
}

void insertInt(int arr[], int sizeArr, int newArr[], int size_newArr, int start)
{
    int i;
    for (i = sizeArr; i >= start; i--)
    {
        arr[i + size_newArr] = arr[i];
    }
    int j = 0;
    for (i = start; i < start + size_newArr; i++)
    {
        arr[i] = newArr[j];
        j++;
    }
}
