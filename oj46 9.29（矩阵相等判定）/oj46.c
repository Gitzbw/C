#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int* p1 = arr1;
	int* p2 = arr2;
	int i = 0;
	int count = 0;
	for (i = 0; i < n * m; i++)
	{
		scanf("%d ", &arr1[i]);
	}
	for (i = 0; i < n * m; i++)
	{
		scanf("%d ", &arr2[i]);
	}
	i = 0;
	while (i<n*m)
	{
		if (*p1 == *p2)
		{
			count++;
		}
		p1++;
		p2++;
		i++;
	}
	if (count == n*m)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}


	return 0;
}