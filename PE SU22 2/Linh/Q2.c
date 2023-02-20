#include <math.h>
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    for (i = 0; i < 6; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            sum += n;
        }
    }

    printf("OUTPUT:\n%d", sum);

    return 0;
}
