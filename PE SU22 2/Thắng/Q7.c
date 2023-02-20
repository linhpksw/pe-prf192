#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, a[i];
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("\nOUTPUT:\n");
    for (i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            printf("%d\n", a[i] * a[i]);
    printf("\n");

    system("pause");
    return 0;
}
