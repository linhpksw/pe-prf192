#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 20

char* toString(int num);

int main() {
    int num = 123;
    char* str = toString(num);

    printf("The integer is: %d\n", num);
    printf("The string is: %s\n", str);

    free(str);  // Remember to free dynamically allocated memory

    return 0;
}

char* toString(int num) {
    char* str = malloc(MAX_LENGTH * sizeof(char));

    sprintf(str, "%d", num);

    return str;
}
