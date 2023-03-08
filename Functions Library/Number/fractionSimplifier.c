#include <stdio.h>
#include <stdlib.h>

void input(int* num, int* den);
void display(int num, int den);
void fractionSimplifier(int* num, int* den);

int calcGCD(int n1, int n2);
void handleSign(int* num, int* den);

int main() {
    int* num = malloc(sizeof(int));
    int* den = malloc(sizeof(int));
    char mode;

    do {
        input(num, den);
        // printf("%d %d", *num, *den);

        fractionSimplifier(num, den);
        // printf("%d %d", *num, *den);

        printf("\nAnother run (y/n)? ");

        scanf(" %c", &mode);  // remember add 1 space before %c

    } while (mode == 'y');

    free(num);
    free(den);

    return 0;
}

void display(int num, int den) {
    if (num) {
        printf("%d/%d", num, den);
    } else {
        printf("%d", num);
    }
};

void fractionSimplifier(int* num, int* den) {
    int numBefore = *num;
    int denBefore = *den;

    int gcd = calcGCD(numBefore, denBefore);
    // printf("%d", gcd);

    printf("%d/%d\n=\n", *num, *den);

    if (numBefore != 0) {
        *num /= gcd;
        *den /= gcd;

        handleSign(num, den);

        int numAfter = *num;
        int denAfter = *den;

        display(numAfter, denAfter);
    } else {
        display(numBefore, denBefore);
    }
};

void input(int* num, int* den) {
    printf("1. Input fraction\n");

    printf("Enter numerator: ");
    scanf("%d", num);

    do {
        printf("Enter denominator: ");
        scanf("%d", den);
    } while (*den == 0);
}

int calcGCD(int n1, int n2) {
    if (n1 == 0 && n2 != 0) {
        return n2;
    } else if (n1 != 0 && n2 == 0) {
        return n1;
    } else if (n1 == 0 && n2 == 0) {
        return 0;
    } else {
        n1 = (n1 > 0) ? n1 : -n1;
        n2 = (n2 > 0) ? n2 : -n2;
        while (n1 != n2) {
            if (n1 > n2) {
                n1 -= n2;
            } else {
                n2 -= n1;
            }
        }
        return n1;
    }
}

void handleSign(int* num, int* den) {
    int numHandle = *num;
    int denHandle = *den;

    if (numHandle >= 0 && denHandle > 0) {
        numHandle = numHandle;
        denHandle = denHandle;
    } else if (numHandle <= 0 && denHandle < 0) {
        numHandle = -numHandle;
        denHandle = -denHandle;
    } else if (numHandle >= 0 && denHandle < 0) {
        numHandle = -numHandle;
        denHandle = -denHandle;
    } else {
        numHandle = numHandle;
        denHandle = denHandle;
    }

    *num = numHandle;
    *den = denHandle;
}
