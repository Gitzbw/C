#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool f(void)
{
	return true;
}

int main(void)
{
	/*int first = 0;
	int second = 1;
	int third = 1;
	int next = 0;
	int i = 0;
	for (i=3;i<=25;i++)
	{
		next = first + second + third;
		first = second;
		second = third;
		third = next;
	}
	printf("%d", third);*/
	int bills[5] = { 5,5,5,10,20 };
	int five = 0;
	int ten = 0;
	for (int i = 0; i < 5; i++)
	{
		if (bills[i] == 5)
		{
			five++;
		}
		else if (bills[i] == 10)
		{
			if (five == 0)
			{
				printf("false");
				return;
			}
			five--;
			ten++;
		}
		else
		{
			if (ten > 0 && five > 0)
			{
				ten--;
				five--;
			}
			else if (five >= 3)
			{
				five -= 3;
			}
			else
			{
				printf("false");
				return;
			}
		}
	}
	printf("true\n");
	bool n = f();
	printf("%d", n);
	return 0;
}