#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max3(int a, int b, int c)
{
    int i = 0;
    int arr[3] = { 0 };
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

    return arr[2];
}

int main(void)
{

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
    int n1 = max3(a+b, b, c);
	int n2 = max3(a, b+c , c);
	int n3 = max3(a, b, b+c);
	double m = (double)n1 / (n2 + n3);
	printf("%.2lf", m);
	return 0;
}