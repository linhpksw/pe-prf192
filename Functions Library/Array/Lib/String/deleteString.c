#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use: popString() removes the last element of an array

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

int stringLength(char arr[][MAX_LENGTH]);
void deleteString(char arr[][MAX_LENGTH], int start, int length);

int main()
{
    char arr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3", "ele4", "ele5", "ele6", "ele7"};
    int length = 2; // this is the amount of elements you want to delete

    deleteString(arr, 3, length); // after this, stringLength(arr) will be auto changed to 5 (old stringLength(arr) - 'length')

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

void deleteString(char arr[][MAX_LENGTH], int start, int length)
{
    int size = stringLength(arr);
    int i;
    for (i = start; i < start + length; i++)
    {
        strcpy(arr[i], arr[i + length]);
    }
    for (i = start + length; i < size; i++)
    {
        strcpy(arr[i], "\0");
    }
}