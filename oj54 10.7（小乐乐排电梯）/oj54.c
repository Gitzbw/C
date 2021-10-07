#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int min = 0;
	while (n >= 12)
	{
		min = min + 4;
		n = n - 12;
	}
	min = min + 2;

	printf("%d", min);

	return 0;
}