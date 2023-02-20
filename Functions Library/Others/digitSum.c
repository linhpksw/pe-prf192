#include <stdio.h>
#include <stdlib.h>

int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n = 472941; // result = 27
    printf("%d\n", digitSum(n));

    system("pause");
    return 0;
}
