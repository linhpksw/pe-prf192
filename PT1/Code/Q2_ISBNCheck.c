#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char ISBN[10];
    scanf("%s", &ISBN);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int i;
    int sum = 0, j = 10, flag = 0;
    if (strlen(ISBN) != 10)
    {
        printf("This is not a valid ISBN.");
    }
    else
    {
        for (i = 0; i < strlen(ISBN); i++)
        {
            if (((ISBN[i] >= 'a' && ISBN[i] <= 'z') || (ISBN[i] >= 'A' && ISBN[i] <= 'Z')) && flag == 0)
            {
                printf("This is not a valid ISBN.");
                flag = 1;
            }
            sum = sum + (ISBN[i] - '0') * j;
            j--;
        }
        if (sum % 11 == 0 && flag == 0)
        {
            printf("This is a valid ISBN.");
        }
        else
        {
            if (flag == 0)
            {
                printf("This is not a valid ISBN.");
            }
        }
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
