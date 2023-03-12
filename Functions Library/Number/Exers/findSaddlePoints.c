#include <stdio.h>
#include <stdlib.h>

void findSaddlePoints(float matrix[][3], int row, int col)
{
    int i, j, k;
    int found;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            float min = matrix[i][j];
            found = 1;
            for (k = 0; k < col; k++)
            {
                if (matrix[i][k] < min)
                {
                    found = 0;
                    break;
                }
            }
            if (found == 1)
            {
                for (k = 0; k < row; k++)
                {
                    if (matrix[k][j] > min)
                    {
                        found = 0;
                        break;
                    }
                }
                if (found == 1)
                    printf("Saddle point found at (%d, %d) with value %f\n", i, j, matrix[i][j]);
            }
        }
    }
}

int main()
{
    float arr[5][3] = {{1.2, 2.3, 3.4}, {4.5, 5.6, 6.7}, {7.8, 8.0, 8.24}, {9.3, 10.2, 11.1}, {12.0, 13.5, 14.2}};
    int i = 5, j = 3;
    findSaddlePoints(arr, i, j); // result: (4, 0) 12.000000

    system("pause");
    return 0;
}
