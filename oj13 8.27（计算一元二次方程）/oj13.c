#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double m = 0;
	while (~scanf(" %lf %lf %lf", &a, &b, &c))
	{
		if (a == 0)
			printf("Not quadratic equation\n");
		else
		{
			m = b * b - 4 * a * c;
			if (m == 0)
			{
				printf("x1=x2=%.2lf\n", -b / (2*a));
			}
			else if (m > 0)
			{
				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(m)) / (2 * a), (-b + sqrt(m)) / (2 * a));
			}
			else
			{
				double shibu = -b / (2 * a);
				double xubu = sqrt(-m) / (2 * a);
				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", shibu, xubu, shibu, xubu);
			}
		}
	}

	return 0;
}