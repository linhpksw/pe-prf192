#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

double calculate_sin(double x, int n);

int main()
{
    // system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    double x;
    int n;
    scanf("%Lf", &x);
    scanf("%d", &n);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    double result = calculate_sin(x, n);
    printf("%lf\n", result);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

double calculate_sin(double x, int n)
{
    double result = 0.0;
    int sign = 1;
    int i;

    for (i = 0; i <= n; i++)
    {
        // Calculate the term in the series
        double term = pow(x, 2 * i + 1) / tgamma(2 * i + 2);

        // Add the term to the result
        result += sign * term;

        // Change the sign for the next term
        sign *= -1;
    }

    return result;
}

/* long double factorial(int num)
{
    long double result = 1.0;
    if (num <= 1)
    {
        return result;
    }
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    // system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    long double x;
    int n;
    scanf("%Lf", &x);
    scanf("%d", &n);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int i = 0;
    long double res = 0;
    printf("numerator = %Lf\n", pow(x, 2 * i + 1) / factorial(2 * i + 1));
    while (i <= n)
    {

        res = res + (powl(-1, i) * (powl(x, 2 * i + 1) / factorial(2 * i + 1)));
        // printf("i = %d\n", i);
        printf("res = %Lf\n", res);
        i++;
    }
    printf("%.4Lf", res);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
} */
