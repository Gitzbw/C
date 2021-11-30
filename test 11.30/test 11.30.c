#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Find(int arr[4][4],int n,int x,int y)
{
	int row = 0;
	int col = y;
	while (row <= x && col >= 0)
	{
		if (arr[row][col] > n)
		{
			col--;
		}
		else if (arr[row][col] < n)
		{
			row++;
		}
		else
		{
			printf("找到了,下标为:%d,%d", row, col);
			break;
		}
	}
	if (!(row <= x && col >= 0))
	{
		printf("找不到");
	}
}

int main(void)
{
	int arr[4][4] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
	int target = 0;
	scanf("%d", &target);
	int x = 3;
	int y = 3;
	Find(arr,target,x,y);
	return 0;
}