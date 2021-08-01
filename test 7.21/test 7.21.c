#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main(void)
//{
//
//	int a = 1;
//	while (a <= 100);
//	{
//
//		printf("%d\n", a);
//
//		a = a+2;
//
//
//	}
//
//
//
//
//
//
//
//	return 0;
//}


//int main(void)
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1 :
//        printf("星期一\n");
//        break; 
//    case 2:
//            printf("星期二\n");
//            break;
//    case 3 :
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    default:
//        printf("输入错误\n");
//        break;
//    
//
//    }
//
//
//
//
//    return 0;
//}



//int main(void)
//{
//
//	int a = 1;
//	while (a < 11);
//	{
//		printf("%d\n", a);
//		a++;
//	
//	
//	}
//	
//
//
//
//
//
//	return 0;
//}

//int main(void)
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:");
//	scanf("%s", password);
//	while((ch = getchar()) != '\n');
//	printf("请确认Y/N:");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//
//
//
//	return 0;
//}


//int main(void)
//{
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d\n", i);
//	}
//
//
//
//
//	return 0;
//}

//int main(void)
//{
//	int x = 1;
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	for(i=1;i<=n; i++)
//	{
//		x = x * i;
//	}
//	printf("%d\n", x);
//
//
//	return 0;
//}


//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		if (k == arr[i])
//		{printf("找到了,下标是%d", i);
//		break;
//		}
//
//	}
//	if (i == sz)
//	printf("找不到");
//
//
//
//
//
//	return 0;
//}


//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	
//	while (left <= right)
//	{
//
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//		left = mid + 1;
//		else
//		{
//			printf("找到了,下标是%d", mid);
//
//			break;
//		}
//	
//	}
//	if (left > right);
//	printf("找不到");
//
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	int password = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%d",password);
//		if (password = 123)
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//			printf("密码错误");
//
//	}
// 
//	if (i == 3)
//		printf("登录失败");
//
//	return 0;
//}