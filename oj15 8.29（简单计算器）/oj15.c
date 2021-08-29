#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double num1 = 0.0;
	double num2 = 0.0;
	char arr = 0.0;
	while (~scanf(" %lf%c%lf", &num1, &arr, &num2))
	{
		if (arr == '+')
		{
			printf("%.4lf%c%.4lf=%.4lf\n",num1,arr,num2,num1+num2);
		}
		else if (arr == '-')
		{
			printf("%.4lf%c%.4lf=%.4lf\n", num1, arr, num2, num1 - num2);
		}
		else if (arr == '*')
		{
			printf("%.4lf%c%.4lf=%.4lf\n", num1, arr, num2, num1 * num2);
		}
		else if (arr == '/')
		{
			if (num2 == 0.0)
			{
				printf("Wrong!Division by zero!");
			}
			else
			{
				printf("%.4lf%c%.4lf=%.4lf\n", num1, arr, num2, num1 / num2);
			}

		}
		else
		{
			printf("Invalid operation!\n");
		}
	}


	return 0;
}