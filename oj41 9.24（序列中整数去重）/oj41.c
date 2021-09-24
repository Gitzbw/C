#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j <= n; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if(arr[i]!=0)
		{
			printf("%d ", arr[i]); 
		}
	}

	return 0;
}