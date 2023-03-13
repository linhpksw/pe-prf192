#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// No-pointer version

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void join(char str[][10], char separator[], char res[]);

int main() {
    char str[][10] = {"Banana", "Orange", "Apple", "Mango"};
    char separator[] = "_";
    char res[100];

    join(str, separator, res);

    printf("%s", res);

    return 0;
}

void join(char str[][10], char separator[], char res[]) {
    int i, j = 0;

    // Copy first string into res
    strcpy(res, str[0]);
    j += strlen(str[0]);

    // Append remaining strings with separators
    for (i = 1; i < 4; i++) {
        strcat(res + j, separator);
        j += strlen(separator);
        strcat(res + j, str[i]);
        j += strlen(str[i]);
    }
}
