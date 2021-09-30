#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	int count = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i-1; j++)
		{
			if (arr[i][j] == 0)
			{
				count++;
			}
		}
	}

	if (count == n * (n - 1) / 2)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");

	return 0;
}