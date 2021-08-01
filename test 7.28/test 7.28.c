#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	char* my_strcpy(char* dest,const char* src);
//	char* (*pf)(char*,const char) = my_strcpy;
//	char* (*pfArr[4])(char*,const char*);
//
//
//
//	return 0;
//}


//void menu()
//{
//	printf("##################################\n");
//	printf("##########1.add    2.sub##########\n");
//	printf("##########3.mul    4.div##########\n");
//	printf("#########     0.exit     #########\n");
//	printf("##################################\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int (*ptArr[5])(int, int) = {0,Add,Sub,Mul,Div};
//
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			int ret = ptArr[input](x, y);
//			printf("结果是:%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("请重新输入");
//	} 
//	while(input);
//
//	return 0;
//}


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = 0;
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//
//void my_qsort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j+1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}	
//		}
//	}
//}
//
//int cmp(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name );
//}
//
//int main(void)
//{
//	struct Stu s[3] = { {"zhangsan",30},{"wangwu",20} ,{"lisi",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	struct Stu* p = &s;
//	my_qsort(s,sz,sizeof(s[0]),cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", (p+i)->name);
//	}
//	return 0;
//}