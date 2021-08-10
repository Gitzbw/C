#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n&(1<<i))
//		{
//			count++;
//		}
//		
//	}
//
//	printf("%d", count);
//
//	return 0;
//}



//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n%10+DigitSum(n/10);
//	}
//	else
//	{
//		return n ;
//	}
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//
//	return 0;
//}


int Print_F(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Print_F(n - 1) + Print_F(n - 2);
	}
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int ret = Print_F(n);

	printf("%d", ret);

	return 0;
}
 