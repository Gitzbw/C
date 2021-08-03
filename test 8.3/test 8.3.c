#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main(void)
//{
//	FILE* pf = fopen("test", "w");
//		if(pf == NULL)
//		{
//			printf("%s\n", strerror(errno));
//		}
//
//		fputs("hello world", pf);
//		
//		fclose(pf);
//		pf = NULL;
//
//	return 0;
//}




//int main(void)
//{
//	FILE* pf = fopen("test", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	char arr[1024] = { 0 };
//	fgets(arr, 1024, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//int main(void)
//{
//	FILE* pf = fopen("test", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	fseek(pf, 1, SEEK_CUR);
//	char a = fgetc(pf);
//	printf("%c\n", a);
//	char b = fgetc(pf);
//	printf("%c\n", b);
//	int n = ftell(pf);
//	printf("%d\n", n);
//
//	return 0;
//}