#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����n�Ľ׳�

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


//����1��+ 2��+ ......+ n!


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




//��һ�����������в��Ҿ����ĳ������k(�۰�/���ֲ���ʵ��)

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
//			printf("�ҵ���,�±�Ϊ:%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
//	}
//}
//int main(void)
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, k, sz);//szҪ��ǰ����� ����Find�����޷����� ��Ϊarr����ȥ������Ԫ�ص�ַ
//	return 0;
//}



//9*9�˷��ھ���

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



//��������Ϸ

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
//			printf("�˳��ɹ�\n");
//			break;
//		default:
//			printf("������ѡ��:");
//			break;
//		}
//	} while (input);
//}
//int main(void)
//{
//	menu();
//	return 0;
//}