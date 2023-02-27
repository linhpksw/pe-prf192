#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int checkPrime(int num)
{
    int count = 0;
    int i;
    if (num == 1 || num == 0)
        return 0;
    for (i = 2; i <= floor(sqrt(num)); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int min, max, numberColumns;
    scanf("%d", &min);
    scanf("%d", &max);
    scanf("%d", &numberColumns);

    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int i, count = 1;
    for (i = min; i <= max; i++)
    {
        if (checkPrime(i))
        {
            printf("%6d", i);
            if (count == 5)
            {
                count = 0;
                printf("\n");
            }
            count++;
        }
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
