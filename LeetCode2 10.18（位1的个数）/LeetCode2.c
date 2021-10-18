#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int uint32_t;

int hammingWeight(uint32_t n) 
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (n & 1 == 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main(void)
{
	
	uint32_t n = 0;

	scanf("%d", &n);

	int ret = hammingWeight(n);

    printf("%d", ret);

	return 0;
}