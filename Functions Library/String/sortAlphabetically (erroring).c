#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortAlphabetically(const int size, char arr[25][size])
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                printf("do sort\n");
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

int main()
{
    char name[25][100] = {"Treyton", "August", "Nicole", "Jean", "Keegan", "Trisha", "Jarett", "Jovanny", "Josh", "Jolene", "Brissa", "Mckinley", "Yessenia", "Nathaly", "Hayleigh"};
    int size = sizeof(name) / sizeof(name[0]);
    sortAlphabetically(size, name);

    int i;
    for (i = 0; i < size; i++)
    {
        printf("%s ", name[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
