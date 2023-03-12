#include <stdio.h>
#include <stdlib.h>

int checkUniqueDigitsNum(int num)
{
    int digitArr[10] = {0};
    int digit;
    while (num > 0)
    {
        digit = num % 10;
        if (digitArr[digit] == 1)
        {
            return 0;
        }
        digitArr[digit] = 1;
        num /= 10;
    }
    return 1;
}

int main()
{
    int n = 649258; // result: UNIQUE-DIGIT NUMBER!
    if (checkUniqueDigitsNum(n))
        printf("UNIQUE-DIGIT NUMBER!\n");
    else
        printf("NOT UNIQUE-DIGIT NUMBER!\n");

    system("pause");
    return 0;
}
