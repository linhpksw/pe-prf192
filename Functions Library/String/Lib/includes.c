#include <stdio.h>
#include <string.h>

int includes(char* str1, char* str2);

int main() {
    char str1[] = "Hello world";
    char str2[] = "worlds";

    if (includes(str1, str2)) {
        printf("'%s' contains '%s'\n", str1, str2);
    } else {
        printf("'%s' does not contain '%s'\n", str1, str2);
    }

    return 0;
}

int includes(char* str1, char* str2) {
    return strstr(str1, str2) != NULL ? 1 : 0;
}
