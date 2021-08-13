#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void BubbleSort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]<arr[j+1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return;
		}
	}
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[40] = {0};
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	int* p = arr;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}