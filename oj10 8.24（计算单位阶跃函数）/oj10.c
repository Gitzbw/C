#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void ¦È(int t)
{
	if (t > 0)
	{
		printf("1\n");
	}
	else if (t == 0)
	{
		printf("%.1f\n", 1.0 / 2.0);
	}
	else
	{
		printf("0\n");
	}
}

int main(void)
{
	int t = 0;
	while (~scanf(" %d", &t))
	{
		¦È(t);
	}

	return 0;
}