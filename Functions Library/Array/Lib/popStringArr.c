#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 20
#define MAX_LENGTH 500

int stringLength(char arr[][MAX_LENGTH]);
char *popStringArr(char arr[][MAX_LENGTH]);

int main()
{
    char strArr[MAX_ELEMENT][MAX_LENGTH] = {"ele1", "ele2", "ele3", "ele4"};
    popStringArr(strArr);
    int i;
    for (i = 0; i < stringLength(strArr); i++)
    {
        printf("%s ", strArr[i]);
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

char *popStringArr(char arr[][MAX_LENGTH])
{
    int size = stringLength(arr);
    arr[size - 1] = NULL;
}