#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	int max = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	for (i=0;i<n;i++)
	{
		int j = 0;
		for (j=0;j<m;j++)
		{
			scanf("%d ", &arr[i][j]);
			if (arr[i][j]>max)
			{
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	printf("%d %d", x, y);
	return 0;
}