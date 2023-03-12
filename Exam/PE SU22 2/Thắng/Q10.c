#include <stdio.h>
#include <stdlib.h>

int checkPerfectNumber(int num)
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
    int n;
    scanf("%d", &n);

    printf("\nOUTPUT:\n");
    if (checkPerfectNumber(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);

    system("pause");
    return 0;
}
