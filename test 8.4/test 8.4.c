#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Add.h"

int main(void)
{

	int a = 0;
	int b = 0;
	printf("������a��ֵ:");
	scanf("%d", &a);
	printf("������b��ֵ:");
	scanf("%d", &b);
	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;
}