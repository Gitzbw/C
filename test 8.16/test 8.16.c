#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//strlen������ģ��ʵ��

//unsigned int My_strlen1(const char* arr)
//{  //��������
//	assert(arr);
//	int count = 0;
//	char* str = arr;
//	while (*(str++))
//	{
//		count++;
//	}
//	return count;
//}
//unsigned int My_strlen2(const char* arr)
//{   //�ݹ鷨 
//	char* str = arr;
//	if (*str != '\0')
//		return 1 + My_strlen2(str + 1);
//	else
//		return 0;
//}
//unsigned int My_strlen3(const char* arr)
//{   //ָ��-ָ��
//	char* str = arr;
//	char* dest = arr;
//	while (*dest)
//	{
//		dest++;
//	}
//	return dest - str;
//}




//strcpy������ģ��ʵ��

//char* My_strcpy(char* dest,const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)//���ʽ���Ϊ*src
//	{
//		;
//	}
//	return ret;
//}



//strcat������ģ��ʵ��

//char* My_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)//���ʽ���Ϊ*src
//	{
//		;
//	}
//	return ret;
//}







//strcmp������ģ��ʵ��

//int My_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}

//strstr������ģ��ʵ��

//char* My_strstr(const char* p1, const char* p2)
//{
//	assert(p1);
//	assert(p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (p2 == '\0')
//		return p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s1 == '\0')
//			return NULL;
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}

int main(void)
{
	char arr1[] = "abcdef@def";
	char arr2[30];
	strcpy(arr2, arr1);
	const char* p = "@";
	char* ret = NULL;
	for (ret = strtok(arr2, p);ret != NULL;ret = strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
	
	
	return 0;
}

