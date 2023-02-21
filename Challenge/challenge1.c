// Tim so co 6 chu so khac nhau
// Chia het cho 5
// Chia 3 du 1

#include <math.h>
#include <stdio.h>

int isDivisibleBy5(int n) {
    return n % 5 == 0 ? 1 : 0;
}

int isRemainder1By3(int n) {
    return n % 3 == 1 ? 1 : 0;
}

int checkUniqueDigitsNum(int num) {
    int digitArr[10] = {0};  // tao mang co 10 phan tu la 0
    int digit;
    while (num > 0) {
        digit = num % 10;
        if (digitArr[digit] == 1) {
            return 0;
        }
        digitArr[digit] = 1;
        num /= 10;
    }

    return 1;
}

int main() {
    int i, j = 0;
    FILE* fptr;

    fptr = fopen("output.txt", "w");

    int result[100000];
    for (i = 100000; i < 1000000; i++) {
        if (isDivisibleBy5(i) && isRemainder1By3(i) && checkUniqueDigitsNum(i)) {
            // result[j] = i;
            // j++;

            fprintf(fptr, "%d ", i);
        }
    }

    fclose(fptr);

    // for (i = 0; i < j; i++) {
    //     printf("%d ", result[i]);
    // }
}

/* char snumber[20];
    int number = 11235;

    printf("Number = %d\n\n", number);

    sprintf(snumber, "%d", number);
    int histogram[10] = {0};
    int len = strlen(snumber);

    for (int i = 0; i < len; i++) {
        histogram[snumber[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (histogram[i] != 0) {
            printf("%d occurs %d times\n", i, histogram[i]);
        }
    }

    return 0; */