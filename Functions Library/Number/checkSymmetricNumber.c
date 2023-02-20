#include <stdio.h>
#include <stdlib.h>

int reverseNum(int num)
{
    int newNum;
    while (num > 0)
    {
        newNum = newNum * 10 + num % 10;
        num /= 10;
    }
    return newNum;
}

int checkSymmetricNumber(int num)
{
    return (num == reverseNum(num));
}

int main()
{
    int n = 12321; // result: SYMMETRIC
    if (checkSymmetricNumber(n))
        printf("SYMMETRIC\n");
    else
        printf("NOT SYMMETRIC\n");

    system("pause");
    return 0;
}
