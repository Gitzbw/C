#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	/*int price[6] = { 7,1,5,3,6,4 };
	int profit = 0;
	for (int i = 0;i<5;i++)
	{
		if (price[i]<price[i+1])
		{
			profit += price[i + 1] - price[i];
		}
	}
	printf("%d", profit);*/
	//int score[5] = { 3,5,2,1,4 };
	int score[5] = { 18,22,17,15,19 };
	int a = score[0];
	int b = score[1];
	int c = score[2];
	int d = score[3];
	int e = score[4];
	sort(score, sizeof(score)/sizeof(score[0]));
	int i = 0;
	for (i=0;i<5;i++)
	{
		if (a == score[i])
		{
			printf("%d", i + 1);
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (b == score[i])
		{
			printf("%d", i + 1);
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (c == score[i])
		{
			printf("%d", i + 1);
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (d == score[i])
		{
			printf("%d", i + 1);
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (e == score[i])
		{
			printf("%d", i + 1);
		}
	}
	return 0;
}