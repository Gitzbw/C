#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[7] = { 0,4,2,3,4,7,6 };
	int i = 0;
	for (i = 1; i < 6; i++)
	{
		if (arr[i-1] < arr[i] && arr[i + 1] < arr[i])
		{
				printf("�ҵ���,����ֵΪ:%d\n", i);
		}
	}

	if (i == 6 && (!(arr[i - 2] < arr[i-1] && arr[i] < arr[i-1])))
	{
		printf("�Ҳ���");
	}


	return 0;
}