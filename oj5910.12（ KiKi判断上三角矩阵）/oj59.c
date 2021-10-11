#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (j <= i - 1 && arr[i][j] != 0)
			{
				printf("NO\n");
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

	if (flag == 0)
	{
		printf("YES\n");
	}
	return 0;
}