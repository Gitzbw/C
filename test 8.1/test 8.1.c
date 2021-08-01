#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main(void)
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	int* ptr = realloc(p, 20);
//	if(ptr != NULL)
//	{
//		p = ptr;
//		for (i = 10; i <= 20; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i <= 20; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}