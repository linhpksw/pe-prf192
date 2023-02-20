#include <stdio.h>
#include <stdlib.h>

int checkPerfectNum(int num)
{
    int i;
    int sum = 0;
    for (i = 1; i * i <= num; i++)
        if (num % i == 0 && i != num)
        {
            sum += i;
            if (i != num / i && num / i != num)
                sum = sum + num / i;
        }
    return (num == sum);
}

int main()
{
    int n = 33550336; // result: PERFECT NUMBER!
    if (checkPerfectNum(n))
        printf("PERFECT NUMBER!\n");
    else
        printf("NOT PERFECT NUMBER!\n");

    system("pause");
    return 0;
}
