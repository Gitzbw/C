#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int arr[100] = { 0 };
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i < n-1; i++)
		{
			arr[i] = i + 2;
		}
		
		for (i = 0; i < n - 1; i++)
		{
			int j = 0;
			for (j = 0; j < i; j++)
			{
				if(arr[i]!= 0 && arr[j]!= 0)
				{
					if (arr[i] % arr[j] == 0)
				{
					arr[i] = 0;
				}
				}
			}
			
		}
		int count = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (arr[i] != 0)
			{
				printf("%d ", arr[i]);
			}
			else
			{
				count++;
			}
		}
		printf("\n");
		printf("%d\n", count);
	}



	return 0;
}