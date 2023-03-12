#include <stdio.h>
#include <string.h>

int indexOf(char* str, char* substr);

int main() {
    char str[] = "Hello world";
    char substr[] = "world";

    int index = indexOf(str, substr);

    if (index >= 0) {
        printf("'%s' contains '%s' at index %d\n", str, substr, index);
    } else {
        printf("'%s' does not contain '%s'\n", str, substr);
    }

    return 0;
}

int indexOf(char* str, char* substr) {
    char* ptr = strstr(str, substr);
    if (ptr != NULL) {
        return ptr - str;
    } else {
        return -1;
    }
}