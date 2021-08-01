#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int Q(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Q(n - 1) + Q(n - 2);
//
//}
//
//
//
//int main(void)
//{
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Q(n);
//	printf("%d", ret);
//
//	return 0;
//}

//void Q(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int x = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				x = 1;
//			}
//			if (x == 0)
//				break;
//		}
//	}
//	
//}
//
//int main(void)
//{
//	int p = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Q(arr, sz);
//	for (p; p < sz; p++)
//	{
//		printf("%d ",arr[p]);
//	}
//
//	return 0;
//}


//int Q(int arr[])
//{
//	int ret= sizeof(arr) / sizeof(arr[0]);
//	printf("%d", ret);
//	return ret;
//}
//
//
//int main(void)
//{
//	int arr[] = { 0,1,2,3 };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	printf("%p\n",&arr);
//	Q(&arr);
//	return 0;
//}


//int main(void)
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%p\n",arr[0]+1);
//	printf("%p\n",&arr+1);
//
//
//	return 0;
//}