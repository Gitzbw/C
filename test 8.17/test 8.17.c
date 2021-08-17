#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>






//memcpy函数的模拟实现

//void* My_memcpy(void* dest,const void* src,unsigned int num)
//{
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[30] = { 0 };
//	My_memcpy(arr2,arr1,sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}




//memmove函数的模拟实现

//void* My_memmove(void* dest,const void* src,unsigned int num)
//{
//	assert(dest,src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[30] = { 0 };
//	My_memmove(arr2,arr1,sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

enum color
{
	RED,
	BULE,
	GREEN
}x;

int main(void)
{
	printf("%d", sizeof(x));

	return 0;
}