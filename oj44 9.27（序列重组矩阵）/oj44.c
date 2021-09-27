#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[100]= { 0 };
	int i = 0;
	for (i = 0; i < m * n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m ; j++)
		{
			printf("%d ", arr[x]);
			x++;
		}
		printf("\n");
	}



	return 0;
}