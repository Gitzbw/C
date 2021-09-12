#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i=0;i<n;i++)
		{
			int j = 0;
			for (j=0;j<n;j++)
			{
				if ((i==0)||(i==n-1)||((i!=0)&&(i!=n-1)&&(j==0))|| ((i != 0) && (i != n - 1) && (j == n-1)))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}


	}





	return 0;
}