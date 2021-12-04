#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sort(int arr[], int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1] && arr[j+1] != 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int child[10] = { 0 };
	int cookie[10] = { 0 };
	int i = 0;
	int sz = 10;
	for (i=0;i<sz;i++)
	{
		scanf("%d ", &child[i]);
	}
	for (i = 0; i < sz; i++)
	{
		scanf("%d ", &cookie[i]);
	}
	Sort(child,sz);
	Sort(cookie, sz);
	int count = 0;
	int* p1 = child;
	int* p2 = cookie;
	while (*p1 != 0 && *p2 != 0)
	{
		if (*p1 <= *p2)
		{
			count++;
			p1++;
		}
			p2++;
	}
	printf("%d", count);
	return 0;
}