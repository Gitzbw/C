#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i <= N; i++)
	{
		scanf("%d ", &arr[i]);
	}
	
	for (i = N; i > 0; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
		}
	}

	for (i = 0; i <= N; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}