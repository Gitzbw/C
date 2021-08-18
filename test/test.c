#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void)
{

	int count1 = 0;
	int count2 = 0;
	char arr[30] = { 0 };
	gets(arr);
	char* p = arr;
	while (*p)
	{
		if (*p == 'A')
		{
			count1++;
			p++;
		}
		if (*p == 'B')
		{
			count2++;
			p++;
		}
	}
	if (count1 > count2)
	{
		printf("A");
	}
	else if (count1 < count2)
	{
		printf("B");
	}
	else
	{
		printf("E");
	}

	return 0;
}