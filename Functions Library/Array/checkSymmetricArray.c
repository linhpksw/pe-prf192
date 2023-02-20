#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// NOTE: you have to define <math.h> from above
int checkSymmetricArray(int *array, const int size)
{
    int j = size - 1, count = 0;
    int i;
    for (i = 0; i < ceil(size / 2); i++)
        if (array[i] == array[j])
        {
            count++;
            j--;
        }
    return (count == ceil(size / 2));
}

int main()
{
    int arr[9] = {1, 5, 6, 8, 3, 8, 6, 5, 1}; // result: SYMMETRIC
    int size = sizeof(arr) / sizeof(arr[0]);
    if (checkSymmetricArray(arr, size))
        printf("SYMMETRIC\n");
    else
        printf("NOT SYMMETRIC\n");

    system("pause");
    return 0;
}
