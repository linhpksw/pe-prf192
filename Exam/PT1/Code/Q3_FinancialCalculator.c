#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    float principle, interestRate;
    int year;
    char type;
    scanf("%f", &principle);
    scanf("%f", &interestRate);
    scanf("%d", &year);
    scanf(" %c", &type);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (type == 'f')
    {
        float futureValue = principle * pow(1 + interestRate, year);
        printf("The present amount : %.2f\n", principle);
        printf("The future value   : %.2f", futureValue);
    }
    if (type == 'p')
    {
        float presentValue = principle * pow(1 + interestRate, -year);
        printf("The future amount  : %.2f\n", principle);
        printf("The present value  : %.2f", presentValue);
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
