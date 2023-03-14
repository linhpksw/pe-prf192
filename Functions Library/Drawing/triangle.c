#include <stdio.h>
#include <stdlib.h>

void shape1()
{
    int i, j, MAX = 6;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j == MAX - 1 || j == MAX - 1 || i == MAX - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void shape2()
{
    int i, j, MAX = 6;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j == MAX - 1 || j == 0 || i == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void shape3()
{
    int i, j, MAX = 6;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (((i + j) / 2 == i && (i + j) / 2 == j) || j == MAX - 1 || i == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void shape4()
{
    int i, j, MAX = 6;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j <= (MAX - 1) * 2; j++)
        {
            if (i + j == MAX - 1 || j - i == MAX - 1 || i == MAX - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    shape1();
    printf("\n");

    shape2();
    printf("\n");

    shape3();
    printf("\n");

    shape4();
    printf("\n");

    system("pause");
    return 0;
}
