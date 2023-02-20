#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// NOTE: you have to define <math.h> from above
int checkPrime(int num)
{
    int count = 0;
    int i;
    if (num == 1)
        return 0;
    for (i = 2; i <= floor(sqrt(num)); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n = 999983; // result: PRIME!
    if (checkPrime(n))
        printf("PRIME!\n");
    else
        printf("NOT PRIME!\n");

    system("pause");
    return 0;
}
