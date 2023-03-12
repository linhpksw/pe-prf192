#include <stdio.h>
#include <string.h>

void sortCharacter(char string[], int n);

int main(void) {
    char string[] = "simplyeasylearning";

    int n = strlen(string);

    printf("String before sorting - %s \n", string);

    sortCharacter(string, n);

    printf("String after sorting  - %s \n", string);
    return 0;
}

void sortCharacter(char string[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (string[i] > string[j]) {
                // change '<' to '>' to sort unalphabetical characters
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}