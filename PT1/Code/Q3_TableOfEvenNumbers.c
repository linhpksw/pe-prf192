#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
    if (min % 2 == 1)
    {
        min++;
    }
    for (i = min; i <= max; i += 2)
    {
        printf("%6d", i);
        if (count == 5)
        {
            count = 0;
            printf("\n");
        }
        count++;
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}
