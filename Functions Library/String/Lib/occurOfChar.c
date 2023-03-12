#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
DEFINE:
1) cOCBD: count occurrence of character and sort them by dictionary
2) cOCBO: count occurrence of character and sort them by order
3) fHFC: find highest frequency of character in a string

*/

void cOCBD(char c[]);
void cOCBO(char c[]);
void fHFC(char c[]);

int main() {
    // char c[] = "";

    char c[1005];
    gets(c);
    // scanf("%[^\n]%*c", c);

    // cOCBD(c);
    // cOCBO(c);
    fHFC(c);

    return 0;
}

void fHFC(char c[]) {
    int cnt[256] = {0};
    int i;

    for (i = 0; i < strlen(c); i++) {
        cnt[c[i]]++;
    }

    int res = 0;
    char kt;

    for (i = 0; i < 256; i++) {
        if (cnt[i]) {
            if (cnt[i] >= res) {
                // "=" means in case have the same highest occur, will print char have higher order in dictionary
                res = cnt[i];
                kt = (char)i;
            }
        }
    }

    printf("%c %d\n", kt, res);
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