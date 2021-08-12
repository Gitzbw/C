#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a >= 100)
	{
		a = a % 100;
	}
	if (b >= 100)
	{
		b = b % 100;
	}
	if (a + b >= 100)
	{
		printf("%d", (a + b)%100);
	}
	else
	{
		printf("%d", a + b);
	}
	
	return 0;
}

// 直接%100更方便

int main(void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = ((a % 100) + (b % 100)) % 100;
	printf("%d", ret);

	return 0;
}