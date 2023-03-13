#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use: insertString() inserts element(s) in a sub array to the original array

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

int stringLength(char arr[][MAX_LENGTH]);
void insertString(char arr[][MAX_LENGTH], char newArr[][MAX_LENGTH], int start);

int main()
{
    char arr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3", "ele6", "ele7"};
    char newArr[MAX_ELEMENT][MAX_LENGTH] = {"ele4", "ele5"};

    insertString(arr, newArr, 3);

    int i;
    for (i = 0; i < stringLength(arr); i++)
    {
        printf("%s ", arr[i]);
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

void insertString(char arr[][MAX_LENGTH], char newArr[][MAX_LENGTH], int start)
{
    int sizeArr = stringLength(arr);
    int size_newArr = stringLength(newArr);
    int i;
    for (i = sizeArr; i >= start; i--)
    {
        strcpy(arr[i + size_newArr], arr[i]);
    }
    int j = 0;
    for (i = start; i < start + size_newArr; i++)
    {
        strcpy(arr[i], newArr[j]);
        j++;
    }
}