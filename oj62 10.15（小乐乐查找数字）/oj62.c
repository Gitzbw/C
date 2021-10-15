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
	int x = 0;
	scanf("%d", &x);
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}