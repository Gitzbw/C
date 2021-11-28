#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Reverse(char arr[],int len)
{
	int left = 0;
	int right = len-1;
	while (left <= right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s", arr);
}

int main(void)
{
	char arr[256] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr);
	Reverse(arr, len);
	return 0;
}