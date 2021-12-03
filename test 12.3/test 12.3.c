#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int arr[4] = { 20,70,40,50 };
	int num = 90;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j=0;j<4;j++)
		{
			if (arr[i] + arr[j] == num && i!=j && i<j)
			{
				printf("ÏÂ±êÎª:%d %d\n", i, j);
			}
		}
	}

	return 0;
}