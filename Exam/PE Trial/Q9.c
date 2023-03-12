#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int digitSum(int num)
{
  int sum = 0;
  while (num > 0)
  {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return sum;
}

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int sum = digitSum(n);
  printf("%d", sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
