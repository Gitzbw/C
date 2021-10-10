#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	long long n = 0;
	scanf("%lld", &n);
	long long arr[100000] = { 0 };
	long long i = 0;
	long long tmp = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &tmp);
		arr[tmp] = tmp;
	}
	
	for (i = 0; i < n; i++)
	{
		if(arr[i]!=0)
		{
			printf("%lld ", arr[i]); 
		}
	}
	return 0;
}