#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double factorial(double num)
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
    double x, epsi;
    scanf("%lf", &x);
    scanf("%lf", &epsi);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int n = 0;
    double res = 0;
    while (fabs(pow(x, 2 * n + 1) / factorial(2 * n + 1)) >= epsi)
    {
        res = res + (pow(-1, n) * (pow(x, 2 * n + 1) / factorial(2 * n + 1)));
        n++;
    }
    printf("%.4lf", res);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
