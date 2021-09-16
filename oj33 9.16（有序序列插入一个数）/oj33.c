#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	int arr[100] = { 0 };
	int i = 0;
	while(i<N)
	{
		scanf("%d ", &arr[i]);
		i++;
	}
	int n = 0;
	scanf("%d", &arr[N]);
	for (i=N;i>0;i--)
	{
		if (arr[i]<arr[i - 1])
		{
			int tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
		}
	}
	for (i=0;i<N+1;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}