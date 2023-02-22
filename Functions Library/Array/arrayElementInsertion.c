#include <stdio.h>
#include <stdlib.h>

void arrayElementInsertion(float a[10], int size, int pos, int n)
{
    int i = size;
    while (i >= pos)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[pos] = n;
}

int main()
{
    float a[10] = {175.62, 252.02, 293.33, 14.47, 216.77, 46.77, 107.36, 97.16, 91.67, 0};
    int size = sizeof(a) / sizeof(float);
    arrayElementInsertion(a, size, 2, 15);
    size = sizeof(a) / sizeof(float);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%g ", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
