#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void dectooct(int ascii)
{
  int i = 0;
  int mod[100];
  while (ascii != 0)
  {
    mod[i] = ascii % 8;
    i++;
    ascii = (int)ascii / 8;
  }

  char output[4] = "0000";
  int j = 3;
  int modSize = i;
  i = 0;
  while (i < modSize)
  {
    output[j] = mod[i] + '0';
    i++;
    j--;
  }
  /*   for (i = 0; i < j + 1; i++)
    {
      output[j] = '0';
    } */

  printf("%s", output);
}

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char c;
  scanf("%c", &c);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d ", c); //@STUDENT: EDIT THIS LINE TO HAVE DESIRED OUTPUT
  int ascii = (int)c;
  dectooct(ascii);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
