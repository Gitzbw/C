#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[15] = { 1,2,2,2,3,4,4,5,6,6,7,8,8,9,10 };
	int* p1 = &arr[0];
	int* p2 = &arr[1];
	while (p2 != &arr[14])
	{
		if (*p1 == *p2)
		{
			p2++;
		}
		else
		{
			*(p1 + 1) = *p2;
			p1++;
			p2++;
		}
	}
	if (*p1 == *p2)
	{
		;
	}
	else
	{
		*(p1 + 1) = *p2;
		
	}
	int i = 0;
	while (arr[i] != *p2)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("%d ", arr[i]);
	return 0;
}