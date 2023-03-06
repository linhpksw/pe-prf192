#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float arr[5];
  int i;
  for (i = 0; i < 5; i++)
  {
    scanf("%f", &arr[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int j;
  for (i = 0; i < 4; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (arr[j] > arr[i])
      {
        float temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  for (i = 0; i < 5; i++)
  {
    printf("%.6f ", arr[i]);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
