#include <stdio.h>
#include <stdlib.h>

int findMaxElementPos(float *arr, const int size)
{
    float max = arr[0];
    int max_pos = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_pos = i;
        }
    }
    return max_pos;
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 8.5, 46.77, 107.36, 97.16, 91.67, 216.77}; // result: 2
    int size = sizeof(a) / sizeof(a[0]);
    printf("Max value position = %d\n", findMaxElementPos(a, size));

    system("pause");
    return 0;
}
