#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d\n", arr[x - 1][y - 1]);

    return 0;
}