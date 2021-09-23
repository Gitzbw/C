#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int N = 0;
	scanf("%d", &N);
	int i = 0;
	int arr[100] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < N; i++)
	{

		if (arr[i]== n)
		{
			;
		}
		else
		printf("%d ", arr[i]);
	}

	return 0;
}