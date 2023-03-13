#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

int stringLength(char arr[][MAX_LENGTH]);

int main()
{
    char arr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3"};

    int size = stringLength(arr);

    printf("%d\n", size);

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