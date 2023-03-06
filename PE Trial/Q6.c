#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverseString(char str[100], int start, int end)
{
  int i, j = end;
  for (i = start; i <= start + (end - start) / 2; i++)
  {
    char temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    j--;
  }
}

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char o[100], p[50];
  scanf("%s", &o);
  scanf(" %s", &p);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int flag = 0, i = 0;
  while (i < strlen(o) - strlen(p) + 1)
  {
    char temp[50];
    strncpy(temp, o + i, strlen(p));
    temp[strlen(p)] = '\0';

    if (strcmp(temp, p) == 0)
    {
      reverseString(o, i, i + strlen(p) - 1);
    }
    i++;
  }
  printf("%s", o);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
