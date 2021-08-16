#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void Reverse(char* left,int sz)
//{
//	char* right =  left + sz - 2;
//	while (left <= right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr,sz);
//	printf("%s", arr);
//
//	return 0;
//}

//凶手是谁

//int main(void)
//{
//	int murderer = 0;
//	for (murderer = 'a'; murderer <= 'd'; murderer++)
//	{
//		if ((murderer !='a')+ (murderer=='c')+ (murderer=='d')+ (murderer !='d') == 3)
//		{
//			printf("murderer is %c", murderer);
//		}
//	}
//
//
//	return 0;
//}

//int main(void)
//{
//	char* p = "abcdef";
//	printf("%c", *p);
//
//	return 0;
//}


//void Left_Move(char* left ,int n)
//{
//	int len = strlen(left);
//	char* right = left + len-1; 
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = *left;
//		for (j = 0; j < len-1; j++)
//			                                 
//		{
//			*(left+j) = *(left + j + 1);
//		}
//		*right = tmp;
//	}
//}
//
//int Is_Left_Move(char* p1 ,char* p2)
//{
//	int len = strlen(p1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		Left_Move(p1, 1);
//		int ret = strcmp(p1, p2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char arr3[] = "bcdefa";
//	int n = 0;
//	scanf("%d", &n);
//	Left_Move(arr1,n);
//	printf("%s\n", arr1);
//	int ret = Is_Left_Move(arr2,arr3);
//	if (ret == 1)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}


//杨氏矩阵

void Find(int arr[3][3],int k,int row,int col)
{
	int target_row = 0;
	int target_col = col-1;
	while (target_row <= row-1 && target_col >= 0)
	{
		if (arr[target_row][target_col] == k)
		{
			printf("找到了 坐标是 (%d,%d)", target_row, target_col);
			break;
		}
		else if (arr[target_row][target_col] > k)
			target_col--;
		else
			target_row++;
	}
	if (arr[target_row][target_col] != k)
	{
		printf("找不到");
	}
}
int main(void)
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 0;
	scanf("%d", &k);
	Find(arr,k,3,3);
	return 0;
}