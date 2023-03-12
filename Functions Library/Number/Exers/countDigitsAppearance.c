#include <stdio.h>
#include <stdlib.h>

void countDigitsAppearance(int num)
{
    int countArr[10] = {0};
    int digit;
    while (num > 0)
    {
        digit = num % 10;
        countArr[digit]++;
        num /= 10;
    }

    int i;
    for (i = 0; i < 10; i++)
        if (countArr[i] != 0)
            printf("Digit %d appears for %d time(s).\n", i, countArr[i]);
}

int main()
{
    int n = 1164863; // result: show how many times that a digit appears
    countDigitsAppearance(n);

    system("pause");
    return 0;
}
