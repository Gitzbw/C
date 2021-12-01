#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jump(int n)
{
	if (n == 0 || n == 1 || n == 2)
	{
		return n;
	}
	
	else
	{
		return Jump(n - 1) + Jump(n - 2);
	}
}

int main(void)
{
	int floor = 0;
	scanf("%d", &floor);
	int n = Jump(floor);
	printf("%d", n);
	return 0;
}