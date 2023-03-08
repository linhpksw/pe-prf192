#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortAlphabetically(char* words[], int count) {
    char* x;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) < 0) {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }
    }
}

int main() {
    char* name[] = {"cherry", "orange", "apple", "oyster"};
    int size = sizeof(name) / sizeof(name[0]);

    sortAlphabetically(name, size);

    int i;
    for (i = 0; i < size; i++) {
        printf("%s ", name[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
