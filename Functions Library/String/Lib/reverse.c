#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[]);

int main() {
    char str[] = "123456789";
    reverse(str);

    printf("%s", str);  // 987654321
    return 0;
}

void reverse(char str[]) {
    int len = strlen(str);
    char temp[len];
    int i;
    for (i = 0; i < len; i++) {
        temp[i] = str[len - 1 - i];
    }

    strcpy(str, temp);
}