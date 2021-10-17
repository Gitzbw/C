#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int climbStairs(int n) 
{
	int arr[100] = { 0 };
	arr[0] = 1;
	arr[1] = 2;
	int i = 0;
	for (i = 2; i<n; i ++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n-1];
}

int main(void)
{

	int n = 0;
	scanf("%d", &n);
	int ret = climbStairs(n);
	printf("%d", ret);

	return 0;
}