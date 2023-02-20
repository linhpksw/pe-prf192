#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    while (a != 1 && b != 1)
    {
        if (a == b)
            return a;
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int n = 12, m = 24; // result: 24
    printf("LCM = %d\n", LCM(m, n));

    system("pause");
    return 0;
}
