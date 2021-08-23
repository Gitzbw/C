#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch = 0;
	while (~scanf(" %c", &ch))
	{
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
			printf("%c\n", ch);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			printf("%c\n", ch);
		}

	}


	return 0;
}