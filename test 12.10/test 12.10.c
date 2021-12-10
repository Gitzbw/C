#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	/*int child[10] = { 1,2,3 };
	int cookie[10] = { 1,2 };
	int count = 0;
	int* p1 = &child;
	int* p2 = &cookie;
	while (*p1 != 0 && *p2 != 0)
	{
		if (*p1 <= *p2)
		{
			count++;
			
			p1++;
		}
		
			p2++;
		
	}
	printf("%d", count);*/
	/*int n = 10;
	int pre = 1;
	int cur = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		int next = pre + cur;
		pre = cur;
		cur = next;
	}
	printf("%d", cur);*/
	int nums[9] = { -2,1,-3,4,-1,2,1,-5,4 };
	int i = 0;
	int dp[9] = { 0 };
	dp[0] = nums[i];
	int max = dp[0];
	for (i = 1; i < 9; i++)
	{
		dp[i] = fmax(nums[i]+dp[i-1],nums[i]);
		max = fmax(max, dp[i]);
	}
	printf("%d",max);
	/*int pre = 0;
	int max = 0;
	for (i = 0; i < 9; i++)
	{
		pre = fmax(nums[i], nums[i] + pre);
		max = fmax(max, pre);
	}
	printf("%d", max);*/
	/*int cost[3] = { 10,15,20 };
	int pre = 0;
	int cur = 0;
	int i = 0;
	for (i=2;i<=3;i++)
	{
		int next = fmin(pre+cost[i-2],cur+cost[i-1]);
		pre = cur;
		cur = next;
	}
	printf("%d", cur);*/
	return 0;
}