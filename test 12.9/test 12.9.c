#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	/*int arr[9] = { -2,1,-3,4,-1,2,1,-5,4 };
	int i = 0;
	int pre = 0;
	int max = arr[0];
	for (i = 0; i < 9; i++)
	{
		pre = fmax(arr[i],pre+arr[i]);
		max = fmax(pre,max);
	}
	printf("%d", max);*/
	int arr[8] = { 0,1,1,2,3,4,5,5 };
	int* left = &arr[0];
	int* right = &arr[1];
	while(right != &arr[7])
	{
		if (*left == *right)
		{
			right++;
		}
		else
		{
			*(left + 1) = *right;
			left++;
			right++;
		}
	}
	int i = 0;
	while (arr[i] != *right)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("%d ", arr[i]);
	return 0;
}