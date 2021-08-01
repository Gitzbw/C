#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			x = i * j;
//			printf("%d*%d=%-2d ",i,j,x);
//		}
//
//		printf("\n");
//	}
//
//
//
//	return 0;
//}





//void menu()
//{
//	printf("************************************\n");
//	printf("**********1.play 0.exit*************\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d",&guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//
//}
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	}
//	
//	
//	while (input);
//
//
//	return 0;
//}




//int main(void)
//{
//
//	char arr[] = "hello world";
//	memset(arr,'#',5);
//	printf("%s\n", arr);
//
//
//
//	return 0;
//}



//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main(void)
//{
//
//
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("a=%d b=%d\n", a, b);
//	MAX(a,b);
//	printf("max=%d\n", max);
//
//
//
//	return 0;
//}



//void Q(int* x, int* y)
//{
//	int tem = 0;
//	tem = *y;
//	*y = *x;
//	*x = tem;
//}
//
//
//int main(void)
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Q(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}




