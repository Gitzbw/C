#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[100] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d ", &arr2[i]);
	}
	int* p1 = arr1;
	int* p2 = arr2;
	int* p3 = arr3;
	while (*p1!=0 && *p2!=0)
	{
		if (*p1 < *p2)
		{
			*p3 = *p1;
			p3++;
			p1++;
		}
		else
		{
			*p3 = *p2;
			p3++;
			p2++;
		}
	}
	if (*p1 == 0 && *p2 == 0)
	{
		;
	}
	else if (*p1 == 0)
	{
		while (*p2 !=0)
		{
			*p3 = *p2;
			p3++;
			p2++;
		}
	}
	else
	{
		while (*p1 != 0)
		{
			*p3 = *p1;
			p3++;
			p1++;
		}
	}
	for (i = 0; i < m + n; i++)
	{
		printf("%d ", arr3[i]);
	}
}