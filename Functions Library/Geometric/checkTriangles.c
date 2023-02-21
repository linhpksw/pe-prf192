#include <stdio.h>
#include <stdlib.h>

int checkTriangle(float a, float b, float c)
{
    return ((a + b) > c && (a + c) > b && (b + c) > a);
}

int checkRightTriangle(float a, float b, float c)
{
    if (checkTriangle(a, b, c))
    {
        if (a * a + b * b == c * c)
            return 1; // 1: right triangle at C
        if (a * a + c * c == b * b)
            return 2; // 2: right triangle at B
        if (b * b + c * c == a * a)
            return 3; // 3: right triangle at A
        return 0;     // 0: not right triangle
    }
}

int checkIsoscelesTriangle(float a, float b, float c)
{
    if (checkTriangle(a, b, c))
    {
        if (a == b)
            return 1; // 1: isosceles at C
        if (a == c)
            return 2; // 2: isosceles at B
        if (b == c)
            return 3; // 3: isosceles at A
        return 0;     // 0: not isosceles
    }
}

int checkEquilateralTriangle(float a, float b, float c)
{
    return (a == b && b == c);
}

/*For people who don't know what sides that a, b, c stand for:
    B
    |\                  a: length of the side opposite to A
    |  \                b: length of the side opposite to B
    |    \              c: length of the side opposite to C
   c|      \  a
    |        \
    |          \
  A |____________\ C
          b
*/

int main()
{
    float a = 3, b = 4, c = 5; // you can change values here to see other results
    if (checkTriangle(a, b, c))
    {
        if (checkEquilateralTriangle(a, b, c))
        {
            printf("This triangle is an equilateral triangle.\n");
            return 0;
        }
        if (checkIsoscelesTriangle(a, b, c) == 1)
        {
            if (checkRightTriangle(a, b, c) == 1)
            {
                printf("This triangle is an isosceles triangle right angled at C.\n");
                return 0;
            }
            printf("This triangle is an isosceles triangle at C.\n");
            return 0;
        }
        if (checkIsoscelesTriangle(a, b, c) == 2)
        {
            if (checkRightTriangle(a, b, c) == 2)
            {
                printf("This triangle is an isosceles triangle right angled at B.\n");
                return 0;
            }
            printf("This triangle is an isosceles triangle at B.\n");
            return 0;
        }
        if (checkIsoscelesTriangle(a, b, c) == 3)
        {
            if (checkRightTriangle(a, b, c) == 3)
            {
                printf("This triangle is an isosceles triangle right angled at A.\n");
                return 0;
            }
            printf("This triangle is an isosceles triangle at A.\n");
            return 0;
        }
        if (checkRightTriangle(a, b, c) == 1)
        {
            printf("This triangle is a triangle right angled at C.\n");
            return 0;
        }
        if (checkRightTriangle(a, b, c) == 1)
        {
            printf("This triangle is a triangle right angled at B.\n");
            return 0;
        }
        if (checkRightTriangle(a, b, c) == 1)
        {
            printf("This triangle is a triangle right angled at A.\n");
            return 0;
        }
        printf("This is a triangle.\n");
    }
    printf("This is not a triangle.\n");

    system("pause");
    return 0;
}