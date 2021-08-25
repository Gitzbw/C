#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf(" %d %d %d", &a, &b, &c))
	{
		if (a + b > c && a + c > b && b + c > a && a - c < b && c - a < b && a - b < c && b - a < c && b - c < a && c - b < a)
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a==b && b!=c)|| (a == c && c != b) || (b == c && c != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}


	return 0;
}