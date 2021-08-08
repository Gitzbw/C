#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int i = 0;
	for (i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < m-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i+1; j++)
		{
			printf("%d ",n);
		}
		printf("\n");
	}


	return 0;
}