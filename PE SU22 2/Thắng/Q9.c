#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <regex.h>

int main() {
    int i, j;
    char str[100];
    scanf("%[^\n]s", str);
    int length = strlen(str);

    for (i = 0, j = 0; i < length; i++)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
            printf("%s\n", str);
        }
    str[j] = '\0';

    printf("\nOUTPUT:\n");
    printf("%s\n", str);

    system("pause");
    return 0;
}

void extractWord(char str[100]) {
    regex_t reegex;

    // Variable to store the return
    // value after creation of regex
    int value;

    // Function call to create regex
    value = regcomp(&reegex, "[:word:]", 0);
}