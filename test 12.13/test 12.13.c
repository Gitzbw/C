#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Isiterate(int arr[],int sz)
{
	int* p1 = &arr[0];
	int* p2 = &arr[1];
	while (p2 != &arr[sz-1])
	{
		if (*p2 == *p1)
		{
			printf("true\n");
			return;
		}
		else
		{
			p1++;
			p2++;
		}
	}
	if (*p2 == *p1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}

int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 1,2,3,3,4 };
	Isiterate(arr1, 5);
	Isiterate(arr2, 5);
	return 0;
}