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
  int *array = (int *)malloc(sizeof(int) * n);
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int sum = 0;
  for (i = 0; i < n; i++)
  {
    if (array[i] % 2 == 0)
    {
      sum += pow(array[i], 2);
    }
  }
  printf("%d", sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
