#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year = 0;
	int month = 0;
	while (~scanf(" %d %d",&year,&month))
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12)
		{
			printf("31\n");
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)

		{
			printf("30\n");
		}
		else
		{
			if ((year%4 == 0 && year%100 != 0) || (year%400 == 0 && year%100 == 0))
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
	}

	

	return 0;
}