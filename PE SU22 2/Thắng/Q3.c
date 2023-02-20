#include <stdio.h>
#include <stdlib.h>

void ascendSelectionSort(int a[100], const int size)
{
    int i, j;
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++)
            if (a[i] > a[j])
            {
                int mid = a[j];
                a[j] = a[i];
                a[i] = mid;
            }
}

int main()
{
    int i, a[100], size;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    ascendSelectionSort(a, size);

    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("\nOUTPUT:\n");
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d\n", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
