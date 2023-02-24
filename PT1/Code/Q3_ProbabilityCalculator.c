#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n, k;
    char mode;
    scanf("%d", &n);
    scanf("%d", &k);
    scanf(" %c", &mode);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:

    double result;

    if (mode != 'y' && mode != 'n')
    {
        printf("No result.");
    }
    if (mode == 'y')
    {
        if (n - k == 0)
        {
            printf("No result.");
        }
        else
        {
            result = factorial(n) / factorial(n - k);
            printf("%.0lf", result);
        }
    }
    if (mode == 'n')
    {
        if (factorial(k) * factorial(n - k) == 0)
        {
            printf("No result.");
        }
        else
        {
            result = factorial(n) / (factorial(k) * factorial(n - k));
            printf("%.0lf", result);
        }
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
