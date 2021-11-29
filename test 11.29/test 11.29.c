#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int* p1 = arr1;
	int* p2 = arr2;
	int arr3[10] = { 0 };
	int i = 0;
	int count1 = 0;
	int count2 = 0;
	while (count1 < sizeof(arr1) / sizeof(arr1[0]) && count2 < sizeof(arr2) / sizeof(arr2[0]))
	{
		if (*p1 <= *p2)
		{
			arr3[i] = *p1;
			i++;
			p1++;
			count1++;
		}
		else
		{
			arr3[i] = *p2;
			i++;
		    p2++;
			count2++;
		}
	}

	if (count1 == 5)
	{
		while (count2 < sizeof(arr2) / sizeof(arr2[0]))
		{
			arr3[i] = *p2;
			i++;
			p2++;
			count2++;
		}
	}
	else
	{
		while (count1 < sizeof(arr1) / sizeof(arr1[0]))
		{
			arr3[i] = *p1;
			i++;
			p1++;
			count1++;
		}
	}
	

	for (int j = 0; j < sizeof(arr3)/sizeof(arr3[0]); j++)
	{
		printf("%d ", arr3[j]);
	}

	return 0;
}