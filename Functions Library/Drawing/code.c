#include <stdio.h>
#include <stdlib.h>

void shape1() // right-angled triangle with the vertical right side
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j >= MAX - 1)
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

void shape2() // right-angled triangle with the vertical left side
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i >= j)
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

void shape3() // right-angled triangle symmetrical with respect to triangle B
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i <= j)
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

void shape4() // square
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i == 0 || j == 0 || i == MAX - 1 || j == MAX - 1)
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

void shape5() // square with X inside
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i == 0 || j == 0 || i == MAX - 1 || j == MAX - 1 || i == j || i + j == MAX - 1)
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

void shape6() // filled square with diamond hole
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j <= (MAX - 1) / 2 || i - j >= (MAX - 1) / 2 || j - i >= (MAX - 1) / 2 || i + j >= 3 * MAX / 2 - 1)
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

void shape7() // diamond
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j == (MAX - 1) / 2 || i - j == (MAX - 1) / 2 || j - i == (MAX - 1) / 2 || i + j == 3 * MAX / 2 - 1)
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

void shape8() // filled diamond
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j >= (MAX - 1) / 2 && i - j <= (MAX - 1) / 2 && j - i <= (MAX - 1) / 2 && i + j <= 3 * MAX / 2 - 1)
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

void shape9() // diamond with (+) inside
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i + j == (MAX - 1) / 2 || i - j == (MAX - 1) / 2 || j - i == (MAX - 1) / 2 || i + j == 3 * MAX / 2 - 1 || i == (MAX - 1) / 2 || j == (MAX - 1) / 2)
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

void shape10() // hourglass shape
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if ((i <= j && i + j < MAX) || (i >= j && i + j >= MAX - 1))
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

void shape11() // lain-down hourglass shape
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if ((i >= j && i + j < MAX) || (i <= j && i + j >= MAX - 1))
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

void shape12() // filled square with a square hole
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i <= MAX / 4 || i >= 3 * MAX / 4 || j <= MAX / 4 || j >= 3 * MAX / 4)
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

void shape13() // filled square with a square hole
{
    int i, j, MAX = 9; // change MAX to create bigger shapes
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if ((i <= MAX / 4 || i >= 3 * MAX / 4 || j <= MAX / 4 || j >= 3 * MAX / 4) && (i + j >= (MAX - 1) / 2 && i - j <= (MAX - 1) / 2 && j - i <= (MAX - 1) / 2 && i + j <= 3 * MAX / 2 - 1))
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

    shape5();
    printf("\n");

    shape6();
    printf("\n");

    shape7();
    printf("\n");

    shape8();
    printf("\n");

    shape9();
    printf("\n");

    shape10();
    printf("\n");

    shape11();
    printf("\n");

    shape12();
    printf("\n");

    shape13();
    printf("\n");

    system("pause");
    return 0;
}
