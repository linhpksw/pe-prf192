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

int main()
{
    int n = 12345; // result: 54321
    printf("%d\n", reverseNum(n));

    system("pause");
    return 0;
}
