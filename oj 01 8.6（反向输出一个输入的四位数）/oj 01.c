#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//�������һ����λ��

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
//		printf("������һ����λ��:");
//		scanf("%d", &input);
//	if (input >= 1000 && input <= 9999)
//	{
//		Negative_Sequence(input);
//	}
//	else
//	{
//		printf("�������");
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
		printf("������һ����λ��:");
		scanf("%d", &input);
		if (input < 1000 || input >9999)
		{
			printf("�����������������\n");
		}
		if (input >= 1000 && input <= 9999)
		{
			Negative_Sequence(input);
		}
	}
	

	return 0;
}


