#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i < (n+1)/2; i++)
		{
			int j = 0;
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("*");
			for (j = 0; j < n-2*(i+1); j++)
			{
				printf(" ");
			}
			if (i != ((n + 1) / 2)-1)
			{
				printf("*");
			}
			else if ((i == ((n + 1) / 2)-1) && (n % 2 == 0))
			{
				printf("*");
			}
			else
				printf(" ");
			
			printf("\n");
		}
		for (i = 0; i < n/2; i++)
		{
			int j = 0;
			for (j = 0; j < n/2-i-1; j++)
			{
				printf(" ");
			}
			printf("*");
			if (n % 2 == 0)
			{
				for (j = 0; j < 2*i; j++)
				{
					printf(" ");
				}
				printf("*\n");
			}
			else
			{
				for (j = 0; j < 2*i+1; j++)
				{
					printf(" ");
				}
				
					printf("*\n");

			}



		}



	}



	return 0;
}