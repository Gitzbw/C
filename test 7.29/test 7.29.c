#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
//
//void my_qsort(void* start, int sz, int width,int(*p)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j=0;j<sz-1-i;j++)
//		{
//			if (p((char*)start + j * width, (char*)start + (j + 1) * width) > 0)
//			{
//				Swap((char*)start + j * width, (char*)start + (j + 1) * width, width);
//				flag = 0;
//			}
//			
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//
//
//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr,sz,sizeof(arr[0]),cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i],cmp);
//	}
//
//	return 0;
//}




//int main(void)
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j=0;j<line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i=0;i< line-1;i++)
//	{
//		for (j=0;j< i+1;j++)
//		{
//			printf(" ");
//		}
//			for (j = 0; j < 2*line-2*i-3; j++)
//			{
//				printf("*");
//			}
//		printf("\n");
//	}
//	
//
//	return 0;
//}