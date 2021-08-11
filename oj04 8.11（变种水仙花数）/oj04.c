#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Lily_Number1()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		if (i == ((i % 10000) * (i / 10000)) + ((i % 1000) * (i / 1000)) + ((i % 100) * (i / 100)) + ((i % 10) * (i / 10)))
		{
			printf("%d ", i);
		}
	}
}

void Lily_Number2()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j=10;j<=10000;j*=10)
		{
			sum += (i / j) * (i % j);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

}


int main(void)
{
	
	Lily_Number1();
	printf("\n");
	Lily_Number2();

	return 0;
}

