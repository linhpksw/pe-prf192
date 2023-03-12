#include <stdio.h>
#include <stdlib.h>

int main()
{
    // main code here
    int i, n, sum;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            sum += n;
    }
    printf("\nOUTPUT:\n%d\n", sum);

    system("pause");
    return 0;
}
