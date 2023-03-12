#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int rootsOfQuadratic(double a, double b, double c, double* x1, double* x2);
void display(int numRoots, double* x1, double* x2);

int main() {
    double* x1 = malloc(sizeof(int));
    double* x2 = malloc(sizeof(int));
    double a, b, c;
    char mode;

    do {
        printf("1. Input the coefficients of the quadratic equation: \n");
        printf("Enter a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        display(rootsOfQuadratic(a, b, c, x1, x2), x1, x2);

        printf("\nAnother run (y/n)? ");

        scanf(" %c", &mode);  // remember add 1 space before %c

    } while (mode == 'y');

    free(x1);
    free(x2);

    return 0;
}

int rootsOfQuadratic(double a, double b, double c, double* x1, double* x2) {
    double D;
    D = b * b - 4 * a * c;

    if (D > 0) {
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
        return 2;

    } else if (D == 0) {
        *x1 = (-b + sqrt(D)) / (2 * a);

        return 1;
    }

    return 0;
}

void display(int numRoots, double* x1, double* x2) {
    printf("2. Solve the equation\n");

    switch (numRoots) {
        case 2:
            printf("There are 2 real roots: x1 = %lf, x2 = %lf", *x1, *x2);
            break;
        case 1:
            printf("There are one real roots: x0 = %lf", *x1);
            break;
        case 0:
            printf("There are no real roots");
            break;
    }
}