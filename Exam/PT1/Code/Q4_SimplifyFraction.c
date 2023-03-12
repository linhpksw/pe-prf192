#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (a == 0)
    {
        if (b == 0)
        {
            printf("0 / 0 = 0 / 0");
            printf("\n");
            system("pause");
            return (0);
        }
        printf("%d / %d = 0 / 1", a, b);
        printf("\n");
        system("pause");
        return (0);
    }
    if (b == 0)
    {
        printf("%d / %d = %d / %d", a, b, a, b);
        printf("\n");
        system("pause");
        return (0);
    }
    if (a > 0 && b > 0)
    {
        int div = GCD(a, b);
        printf("%d / %d = %d / %d", a, b, a / div, b / div);
        printf("\n");
        system("pause");
        return (0);
    }
    if ((a < 0 && b > 0) || (a > 0 && b < 0))
    {
        int div = GCD(abs(a), abs(b));
        printf("%d / %d = -%d / %d", a, b, abs(a) / div, abs(b) / div);
        printf("\n");
        system("pause");
        return (0);
    }
    if (a < 0 && b < 0)
    {
        int div = GCD(abs(a), abs(b));
        printf("%d / %d = %d / %d", a, b, a / div, b / div);
        printf("\n");
        system("pause");
        return (0);
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
