#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int h = 0;
    int m = 0;
    int k = 0;
    scanf("%d:%d %d", &h, &m, &k);

    h = (h + (k + m) / 60) % 24;
    m = (k + m) % 60;

    printf("%02d:%02d\n", h, m);

    return 0;
}