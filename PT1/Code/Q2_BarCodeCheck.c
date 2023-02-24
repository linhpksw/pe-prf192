#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("cls");
    //  INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char UPC[12];
    int i;
    scanf("%s", &UPC);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (strlen(UPC) != 12)
    {
        printf("This is not valid UPC.");
    }
    else
    {
        int evenPosSum = 0, oddPosSum = 0;
        for (i = 0; i < 11; i++)
        {
            if (i % 2 == 0)
            {
                oddPosSum = oddPosSum + (UPC[i] - '0');
            }
            else
            {
                evenPosSum = evenPosSum + (UPC[i] - '0');
            }
        }
        int totalSum = 3 * oddPosSum + evenPosSum + (UPC[i] - '0');
        if (totalSum % 10 == 0)
        {
            printf("This is a valid UPC\n");
            char companyCode[7], productCode[5];
            strncpy(companyCode, UPC + 0, 6);
            companyCode[6] = '\0';
            strncpy(productCode, UPC + 6, 5);
            printf("The company code is %s.\n", companyCode);
            printf("The product code is %s.", productCode);
        }
        else
        {
            printf("This is not a valid UPC.");
        }
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
