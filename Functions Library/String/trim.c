#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim1Space(char c[]);
void trimNoSpace(char c[]);

int main() {
    char c[] = "JS-Java-Python";
    // trimNoSpace(c);
    replace(c, "JS", "Linh");

    printf("%s", c);

    return 0;
}

void trim1Space(char c[]) {
    char temp[100];
    char* token = strtok(c, " ");

    // Initialize temp array with zeros
    memset(temp, 0, sizeof(temp));

    while (token != NULL) {
        if (strlen(temp) > 0) {
            strcat(temp, " ");  // change " " -> "" to remove all whitespace
        }
        strcat(temp, token);
        token = strtok(NULL, " ");
    }

    strcpy(c, temp);
}

void trimNoSpace(char c[]) {
    char temp[100];
    char* token = strtok(c, " ");

    // Initialize temp array with zeros
    memset(temp, 0, sizeof(temp));

    while (token != NULL) {
        if (strlen(temp) > 0) {
            strcat(temp, "");  // change " " -> "" to remove all whitespace
        }
        strcat(temp, token);
        token = strtok(NULL, " ");
    }

    strcpy(c, temp);
}
