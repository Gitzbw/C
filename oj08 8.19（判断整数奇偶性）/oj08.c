#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>


int main(void)
{
	int n = 0;
	while (~scanf("%d ", &n))
	{
		if (n % 2 == 1)
		{
			printf("Odd\n");
		}
		else
			printf("Even\n");
	}

	return 0;
}