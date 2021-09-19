#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	double arr[100] = { 0.0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		scanf("%lf ", &arr[i]);
		i++;
	}
	for (i = 0; i < n-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	double sum = 0.0;
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	printf("%.2lf %.2lf %.2lf", arr[n - 1], arr[0], sum/5);

	return 0;
}