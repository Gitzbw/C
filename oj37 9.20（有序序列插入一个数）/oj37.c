#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int N = 0;
	scanf("%d", &N);
	int arr[100] = { 0 };
	int i = 0;
	while (i < N)
	{
		scanf("%d ", &arr[i]);
		i++;
	}
	
	scanf("%d", &arr[N]);

	int n = N;

	while (arr[n]<arr[n-1] && n-1>=0)
	{
		int tmp = arr[n];
		arr[n] = arr[n - 1];
		arr[n - 1] = tmp;
		n--;
	}

	for (i = 0; i < N + 1; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}