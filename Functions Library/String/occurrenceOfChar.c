#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define:
// cOCBD count occurrence of characters and sort them by dictionary
// cOCBO count occurrence of characters and sort them by order

/*
a : 97 -> 0
b : 98 -> 1
c : 99 -> 2
....
z : 122 -> 25
*/
void cOCBD(char c[]);
void cOCBO(char c[]);

int main() {
    // char c[] = "";

    char c[1005];
    gets(c);
    // scanf("%[^\n]%*c", c);

    // cOCBD(c);
    cOCBO(c);

    return 0;
}

void cOCBD(char c[]) {
    int cnt[256] = {0};
    int i;

    for (i = 0; i < strlen(c); i++) {
        cnt[c[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (cnt[i] != 0) {
            printf("%c %d\n", i, cnt[i]);
        }
    }
}

void cOCBO(char c[]) {
    int cnt[256] = {0};
    int i;

    for (i = 0; i < strlen(c); i++) {
        cnt[c[i]]++;
    }

    for (i = 0; i < strlen(c); i++) {
        if (cnt[c[i]]) {
            printf("%c %d\n", c[i], cnt[c[i]]);
            cnt[c[i]] = 0;
        }
    }
}