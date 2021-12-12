#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[11] = { 1,1,2,3,3,4,4,5,5,6,6 };
	int single = 0;
	int i = 0;
	for (i = 0; i < 11; i++)
	{
		single ^= arr[i];
	}
	printf("%d", single);
	return 0;
}