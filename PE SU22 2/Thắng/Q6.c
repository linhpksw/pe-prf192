#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
        if (i % 2 != 0)
            str[i] = toupper(str[i]);

    printf("\nOUTPUT\n");
    printf("%s\n\n", str);

    system("pause");
    return 0;
}
