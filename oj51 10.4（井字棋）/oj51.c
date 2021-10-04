#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[3][3] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			scanf(" %c ", &arr[i][j]);
		}
	}
	if (
		(arr[0][0]== arr[0][1] && arr[0][1]== arr[0][2] && arr[0][2]== 'K')||
		(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == 'K') || 
		(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'K') || 
		(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == 'K') || 
		(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == 'K') ||
		(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'K') ||
		(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == 'K') ||
		(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == 'K')
		)
	{
		printf("KiKi wins!");
	}
	else if (
		(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == 'B') ||
		(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == 'B') ||
		(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'B') ||
		(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == 'B') ||
		(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == 'B') ||
		(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'B') ||
		(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == 'B') ||
		(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == 'B')
		)
	{
		printf("BoBo wins!");
	}
	else
	{
		printf("No winner!");
	}



	return 0;
}