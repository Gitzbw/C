#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//计算n的阶乘

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	
//	printf("%d", ret);
//
//	return 0;
//}


//计算1！+ 2！+ ......+ n!


//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}




//在一个有序数组中查找具体的某个数字k(折半/二分查找实现)

//void Find(int arr[],int k ,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right )
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("找到了,下标为:%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
//}
//int main(void)
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, k, sz);//sz要提前计算好 传到Find函数无法计算 因为arr传上去的是首元素地址
//	return 0;
//}



//9*9乘法口诀表

//int main(void)
//{
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j );
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//猜数字游戏

//void game()
//{
//	return;
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("********1.play       0.exit********\n");
//	printf("***********************************\n");
//	int input = 0;
//	do
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出成功\n");
//			break;
//		default:
//			printf("请重新选择:");
//			break;
//		}
//	} while (input);
//}
//int main(void)
//{
//	menu();
//	return 0;
//}