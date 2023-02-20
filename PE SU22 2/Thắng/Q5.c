#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], n, p, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &p);

    for (i = p - 1; i < n; i++)
        a[i] = a[i + 1];

    printf("\nOUTPUT:\n");
    for (i = 0; i < n - 1; i++)
        printf("%d\n", a[i]);

    system("pause");
    return 0;
}
