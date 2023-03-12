#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    do
        scanf("%d", &n);
    while (n < 0);

    printf("\nOUTPUT:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
            printf("%d ", j + 1);
        printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}
