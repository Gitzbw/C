#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Is_Prime_Number(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}

	}
	
		return 1;
	
}

int main(void)
{
	int i = 0;
	int count = 0;
	for (i = 100; i < 1000; i++)
	{
		int ret = Is_Prime_Number(i);
			if (ret == 1)
			{
				count++;
			}
	}
	printf("%d", count);


	return 0;
}