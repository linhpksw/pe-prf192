#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i, j, count = 0;
  while (count <= n)
  {
    if (count != 0)
    {
      for (j = 0; j < count; j++)
      {
        printf(" ");
      }
    }
    for (j = 0; j < n - count; j++)
    {
      printf("*");
    }
    count++;
    printf("\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
