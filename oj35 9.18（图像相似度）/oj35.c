#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);
    }
    int res = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                res++;
        }
    float ans = 100.0 * res / (m * n);
    printf("%.2f", ans);

	

	return 0;
}