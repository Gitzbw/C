#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Count(int n)
{

	if (n <= 2)
	{
		
		return n;
	}
	else
		return Count(n - 1) + Count(n - 2);
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);

	return 0;
}