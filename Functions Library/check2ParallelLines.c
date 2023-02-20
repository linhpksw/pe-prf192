#include <stdio.h>
#include <stdlib.h>

int check2ParallelLines(float xAB, float yAB, float xCD, float yCD)
{
    float k = xAB / xCD;
    if (yAB = k * yCD)
        return 1;
    return 0;
}

int main()
{
    // result: PARALLEL
    float xA = 7, yA = 4;
    float xB = 5, yB = 3;
    float xC = 9, yC = 10;
    float xD = 1, yD = 6;
    // xAB = xB - xA; yAB = yB - yA
    // xCD = xD - xC; yCD = yD - yC
    if (check2ParallelLines(xB - xA, yB - yA, xD - xC, yD - yC))
        printf("PARALLEL\n");
    else
        printf("NOT PARALLEL\n");

    system("pause");
    return 0;
}
