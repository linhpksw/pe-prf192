#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//  INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int arr[7], i, j;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int res[3], appearCount[7] = {0};
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (arr[i] == arr[j])
			{
				appearCount[i]++;
			}
		}
	}

	int maxCount = appearCount[0];
	for (i = 1; i < 7; i++)
	{
		if (maxCount < appearCount[i])
		{
			maxCount = appearCount[i];
		}
	}

	j = 0;
	int duplicateCheck = 0;
	for (i = 0; i < 7; i++)
	{
		if (appearCount[i] == maxCount)
		{
			if (j != 0)
			{
				int k;
				for (k = 0; k < j; k++)
				{
					if (res[k] == arr[i])
					{
						duplicateCheck = 1;
					}
				}
			}
			if (duplicateCheck == 0)
			{
				res[j] = arr[i];
				j++;
			}
			duplicateCheck = 0;
		}
	}

	int has2DigitFlag = 0;
	for (i = 0; i < j; i++)
	{
		if (res[i] / 10 != 0)
		{
			printf("%d ", res[i]);
			has2DigitFlag = 1;
		}
	}
	if (has2DigitFlag == 0)
	{
		printf("no two-digit number");
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system("pause");
	return (0);
}
