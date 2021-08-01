#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int FindNum(int arr[3][3],int k,int* px,int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*px-1 && y>=0)
//	{
//		if (arr[x][y] == k)
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//	}
//	return 0;
//}
//
//
//int main(void)
//{
//	int x = 3;
//	int y = 3;
//	int k = 7;
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int ret = FindNum(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标是:%d %d", x, y);
//	}
//
//	if (ret == 0)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}