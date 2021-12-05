#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	/*int cost[10] = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
	int dp[11] = { 0 };
	int i = 0;
	for (i = 2; i < 11; i++)
	{
		dp[i] = fmin(dp[i-1]+cost[i-1], dp[i - 2] + cost[i - 2]);
	}
	printf("%d", dp[10]);*/
	/*int cost[10] = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
	int pre = 0;
	int curr = 0;
	int i = 0;
	for (i = 2; i <= 10; i++)
	{
		int next = fmin(curr + cost[i - 1], pre + cost[i - 2]);
		pre = curr;
		curr = next;
	}
	printf("%d", curr);*/
	/*int num[9] = { -2,1,-3,4,-1,2,1,-5,4 };
	int pre = 0;
	int max = num[0];
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		pre = fmax(num[i],num[i]+pre);
		max = fmax(max,pre);
	}
	printf("%d", max);*/
	/*int price[6] = { 7,1,5,3,6,4 };
	int i = 0;
	int m = 0;
	for (i = 0; i < 5; i++)
	{
		if (price[i] < price[i + 1])
		{
			m += price[i+1] - price[i];
		}
	}
	printf("%d", m);*/
	int n = 10;
	int i = 0;
	int pre = 1;
	int curr = 1;
	for (i = 2; i < n; i++)
	{
		int next = curr + pre;
		pre = curr;
		curr = next;
	}
	printf("%d", curr);
	return 0;
}