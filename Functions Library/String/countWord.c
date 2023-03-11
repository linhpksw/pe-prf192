#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this function will count every groups of characters that don't contain space ' ' character
// NOTE: you have to define <string.h> from above
int countWord(char string[300]) {
    int i;
    int wordCount = 1;
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == ' ' && string[i + 1] != ' ') {
            wordCount++;
        }
    }

    return wordCount;
}

int main() {
    char str[300] = "Word1 ,Word 2  W-oRd3.   4or;'Wd !@";  // result: 6
    printf("Word number: %d\n", countWord(str));

    system("pause");
    return 0;
}
