#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//反向输出一个四位数

void Negative_Sequence(int x)
{
	if (x < 10)
	{
		printf("%d", x);
	}
	else
	{
		printf("%d", x%10);
		Negative_Sequence(x/10);
	}

}

//int main(void)
//{
//	
//	int input = 0;
//	
//		printf("请输入一个四位数:");
//		scanf("%d", &input);
//	if (input >= 1000 && input <= 9999)
//	{
//		Negative_Sequence(input);
//	}
//	else
//	{
//		printf("输入错误");
//		
//	}
//	
//
//
//	return 0;
//}


int main(void)
{

	int input = 1;
	while (input < 1000 || input >9999)
	{
		printf("请输入一个四位数:");
		scanf("%d", &input);
		if (input < 1000 || input >9999)
		{
			printf("输入错误，请重新输入\n");
		}
		if (input >= 1000 && input <= 9999)
		{
			Negative_Sequence(input);
		}
	}
	

	return 0;
}


