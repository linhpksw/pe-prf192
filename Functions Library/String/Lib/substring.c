#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substring(char* src, int start, int len);

int main() {
    char source[] = "Hello, World!";

    printf("Substring: %s\n", substring(source, 0, 5));

    return 0;
}

char* substring(char* src, int start, int len) {
    char* dest;
    // Allocate memory for the substring
    dest = (char*)malloc(len + 1);

    int src_len = strlen(src);

    if (start >= src_len) {
        dest[0] = '\0';
        return dest;
    }

    if (start + len > src_len) {
        len = src_len - start;
    }

    strncpy(dest, src + start, len);
    dest[len] = '\0';

    return dest;
}
