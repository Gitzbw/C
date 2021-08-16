#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp(const void* e1,const void*e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void Swap(char* p1,char* p2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
void My_qsort(const void* p ,int sz,int width ,int(*cmp)(void*,void*))
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)p + j * width, (char*)p + (j + 1) * width) > 0)
			{
				Swap((char*)p + j * width, (char*)p + (j + 1) * width,width);
				flag = 1;
			}
		}
		if (flag == 0)
			return;
	}
}

int main(void)
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	My_qsort(arr,sz,width,cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}
