#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float circleArea(int radius)
{
    if (radius > 0)
        return 3.14159 * radius * radius;
    return -1;
}

int isPerfectSquare(int num)
{
    return (sqrt(num) == (int)sqrt(num));
}

int wordNumber(char string[300])
{
    int i;
    int wordCount = 1;
    for (i = 0; i < strlen(string); i++)
        if (string[i] == ' ' && string[i + 1] != ' ')
            wordCount++;
    return wordCount;
}

void squareArray(float array[100], int length)
{
    int i;
    for (i = 0; i < length; i++)
        array[i] *= array[i];
    printf("The array after being squared: ");
    for (i = 0; i < length; i++)
        printf("%g ", array[i]);
    printf("\n\n");
}

int main()
{
    float r = 8.9;
    int n = 9;
    char str[100] = "Who am  I? wHy   am I     ,hEre.";
    float arr[5] = {3, 4, 5, 6.6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int mode;

    do
    {
        printf("1. Calculate a circle area with radius r\n");
        printf("2. Check number n is a perfect square or not\n");
        printf("3. Count numbers of word in string str\n");
        printf("4. Square all elements in array arr\n");
        printf("5. Stop program\n");
        printf("Please chooose 1 in programs above to run: ");
        scanf("%d", &mode);

        if (mode == 1)
            printf("The area of a circle with radius r = %f is %f\n\n", r, circleArea(r));
        if (mode == 2)
            if (isPerfectSquare(n))
                printf("n is a perfect square.\n\n");
            else
                printf("n is not a perfect square.\n\n");
        if (mode == 3)
            printf("Word number in str: %d\n\n", wordNumber(str));
        if (mode == 4)
        {
            int length = sizeof(arr) / sizeof(arr[0]);
            int i;
            squareArray(arr, arrSize);
        }
    } while (mode != 5);

    system("pause");
    return 0;
}
