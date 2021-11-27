#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Find(int arr[], int sz,int num)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (num<arr[mid])
		{
			right = mid - 1;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
}

int main(void)
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int target_num = 0;
	scanf("%d", &target_num);
	Find(arr, sz, target_num);
	return 0;
}
