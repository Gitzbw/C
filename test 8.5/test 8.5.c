#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//冒泡排序的实现及优化

void my_sort(int arr[], int sz)
{
	int i = 0;
	for (i=0;i<sz-1;i++)
	{
		int j = 0;
		int flag = 1;
		for (j=0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			
		}
		if (flag == 1)
		{
			return;
		}
	}
}

int main(void)
{

	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}