#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n = 0;
	long sum = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%ld", sum);


	return 0;
}