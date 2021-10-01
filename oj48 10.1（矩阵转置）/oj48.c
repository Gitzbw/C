#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10] = {0};
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	for(i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}