#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkSymmetric(char c[]);

int main() {
    char c[] = "abcecba";

    printf("%d", checkSymmetric(c));
}

int checkSymmetric(char c[]) {
    int i, l = 0, r = strlen(c) - 1;

    while (l <= r) {
        if (c[l] != c[r]) {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
