#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char SIN[12];
    scanf("%s", &SIN);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int i, flag = 0, sum = 0;
    for (i = strlen(SIN) - 2; i >= 0; i--)
    {
        if (flag == 0)
        {
            int num = SIN[i] - '0';
            num *= 2;
            while (num > 0)
            {
                sum = sum + num % 10;
                num /= 10;
            }
            flag = 1;
        }
        else
        {
            sum = sum + (SIN[i] - '0');
            flag = 0;
        }
    }
    sum = sum + (SIN[strlen(SIN) - 1] - '0');
    if (sum % 10 == 0)
    {
        printf("This is a valid SIN.");
    }
    else
    {
        printf("This is not a valid SIN.");
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
