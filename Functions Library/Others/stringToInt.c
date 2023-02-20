#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// NOTE: you have to define <string.h> and <math.h> from above
int stringToInt(char input[10])
{
    int i, k, digit;
    int finalnum = 0;

    k = strlen(input) - 1;
    for (i = 0; i < strlen(input); i++)
    {
        digit = input[i] - '0';
        finalnum = finalnum + digit * pow(10, k);
        k--;
    }

    return finalnum;
}

int main()
{
    char num[30] = "547292"; // result: 547292 (integer type)
    printf("%d\n", stringToInt(num));

    system("pause");
    return 0;
}
