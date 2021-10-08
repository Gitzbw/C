#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Getx1(int a, int b)
{
    int r = 1;
    while (r!= 0)
    {
        r = a % b;
        a= b;
        b= r;

    }
    return a;
}

int Getx2(int n, int m,int x1)
{
    return n*m/x1 ;
}

int main(void)
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int x1 = Getx1(n,m);
    int x2 = Getx2(n,m,x1);
    int x3 = x1 + x2;
    printf("%d", x3);


    return 0;
}