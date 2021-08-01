#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//int main(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 0)
//	{
//		printf("´ó¶Ë\n");
//	}
//	if (*p == 1)
//	{
//		printf("Ð¡¶Ë\n");
//	}
//
//
//	return 0;
//}

struct Stu
{
	char a;
	int b;
	double c;
};

int main(void)
{

	struct Stu s = { 0 };

	printf("%d %d %d", offsetof(struct Stu, a), offsetof(struct Stu, b), offsetof(struct Stu, c));


	return 0;
}