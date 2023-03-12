#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int n = 0;
    scanf("%d", &a);

    printf("\nOUTPUT:\n");
    do
    {
        if (pow(2, n) == a)
        {
            printf("%d\n", n);
            break;
        }
        if (pow(2, n) > a)
        {
            printf("%d is not a power of 2\n", a);
            break;
        }
        n++;
    } while (a > 0);

    system("pause");
    return 0;
}
