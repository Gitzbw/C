#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>



//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main(void)
//{
//
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//
//	return 0;
//}



//int main(void)
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	
//
//	return 0;
//}



//int main(void)
//{
//	int arr1[] = {1,2,3};
//	int arr2[] = {4,5,6};
//	int arr3[] = {7,8,9};
//	int* arr[] = {arr1,arr2,arr3};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3 ; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}