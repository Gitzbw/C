#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

int main(void)
{
	int arr[7] = { 0 };
	scanf("%d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	printf("%.2lf", (double)(arr[1]+arr[2]+arr[3]+arr[4]+arr[5])/5);


	return 0;
}