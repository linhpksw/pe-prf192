#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substring(char* src, int start, int len);
char* stringReplace(const char* str, const char* old, const char* new);

int main() {
    char str[] = "aa, ba, caa";

    char* newstr = stringReplace(str, substring(str, 0, 2), "11");

    printf("Original: %s\n", str);  // Original: aa, ba, caa
    printf("New: %s\n", newstr);    // New: 11, ba, c11

    free(newstr);

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

char* stringReplace(const char* str, const char* old, const char* new) {
    char* result;
    int i, count = 0;
    size_t newlen = strlen(new);
    size_t oldlen = strlen(old);

    // Count the number of times the old substring appears in the string
    for (i = 0; str[i] != '\0';) {
        if (strstr(&str[i], old) == &str[i]) {
            count++;
            i += oldlen;
        } else {
            i++;
        }
    }

    // Allocate memory for the new string
    result = (char*)malloc(strlen(str) + (newlen - oldlen) * count + 1);

    i = 0;
    while (*str) {
        if (strstr(str, old) == str) {
            strcpy(&result[i], new);
            i += newlen;
            str += oldlen;
        } else {
            result[i++] = *str++;
        }
    }

    result[i] = '\0';
    return result;
}
