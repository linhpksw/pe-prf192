#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

int stringLength(char arr[][MAX_LENGTH]);
void shiftString(char newArr[][MAX_LENGTH], char arr[][MAX_LENGTH]);

int main()
{
    char arr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3", "ele4"};
    char newArr[MAX_ELEMENT][MAX_LENGTH];
    shiftString(newArr, arr);

    int i;
    for (i = 0; i < stringLength(newArr); i++)
    {
        printf("%s ", newArr[i]);
    }

    system("pause");
    return 0;
}

int stringLength(char arr[][MAX_LENGTH])
{
    int i, size = 0;

    for (i = 0; i < MAX_ELEMENT; i++)
    {
        if (strlen(arr[i]) > 0)
        {
            size++;
        }
    }

    return size;
}

void shiftString(char newArr[][MAX_LENGTH], char arr[][MAX_LENGTH])
{
    int size = stringLength(arr);
    int i;
    for (i = 0; i < size - 1; i++)
    {
        strcpy(newArr[i], arr[i + 1]);
    }
}