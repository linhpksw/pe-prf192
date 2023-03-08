#include <stdio.h>
#include <stdlib.h>

float findMinElement(float *arr, const int size)
{
    float min = arr[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 8.5, 46.77, 107.36, 97.16, 91.67, 216.77}; // result: 8.5
    int size = sizeof(a) / sizeof(a[0]);
    printf("Min value = %f\n", findMinElement(a, size));

    system("pause");
    return 0;
}
