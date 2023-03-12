#include <stdio.h>
#include <stdlib.h>

void splitWord(char s[100], char delim, char *word, int wordNum)
{
    int i;
    int wordCount = 0;
    char splitedWord[100];
    for (i = 0; i < strlen(s); i++)
    {
        int start = i;
        if (s[i] = delim && s[i + 1] != delim)
        {
            int end = i, j = start, k = 0;
            while (j <= end)
            {
                if (s[j] != delim)
                {
                    splitedWord[k] = s[j];
                }
                j++;
            }
            strcpy(word[wordCount], splitedWord);
            wordCount++;
        }
    }
    wordNum = wordCount;
}

int main()
{
    char s[100];
    char word[100][100];
    printf("Input the string: ");
    scanf(" %s", &s);

    int i;
    int wordNum = 0;
    splitWord(s, ' ', word, wordNum);
    for (i = 0; i < wordNum; i++)
    {
        printf("%s ", word[i]);
    }

    system("pause");
    return 0;
}
