#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int N = 0;
	scanf("%d", &N);
	int arr[100] = {0};
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int count1 = 0;
	for (i = 0; i < N-1; i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			count1++;
		}
	}
	int count2 = 0;
	for (i = 0; i < N - 1; i++)
	{
		if (arr[i] >= arr[i + 1])
		{
			count2++;
		}
	}
	if (count1 == N - 1 || count2 == N - 1)
	{
		printf("sorted");
	}
	else
		printf("unsorted");

	return 0;
}