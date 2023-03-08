#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strReplace(const char* str, const char* old, const char* new);

int main() {
    char str[] = "aa, ba, caa, aa";
    char* newstr = strReplace(str, "aa", "11");

    printf("Original: %s\n", str);
    printf("New: %s\n", newstr);

    free(newstr);

    return 0;
}

char* strReplace(const char* str, const char* old, const char* new) {
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
