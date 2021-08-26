#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight = 0;
	double height = 0;
	while (~scanf(" %lf %lf", &weight, &height))
	{
		double BMI = weight/(height/100)/ (height / 100);
		if(BMI<18.5)
		{
			printf("Underweight\n");
		}
		else if(BMI>=18.5 && BMI<=23.9)
		{
			printf("Normal\n");
		}
		else if (BMI>23.9 && BMI<=27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}

	return 0;
}