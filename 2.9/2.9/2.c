#define  _CRT_SECURE_NO_WARNINGS 1

//2838: 小豪的室友(不会,不对)
//#include<stdio.h>
//#include<string.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int min(int x, int y)
//{
//	return x < y ? y : x;
//}
//char a[191919];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	scanf("%s", a);
//	int a1 = 0, a2 = 0, b1 = 0,b2=0;
//	int l = strlen(a);
//	for (int i = 0; i < l; i++)
//	{
//		if (a[i] == 'w')
//		{
//			if (i % 2 == 1)
//				a1++;
//			else
//			a2++;
//
//		}
//		else
//		{
//			if (i % 2 == 1)
//				b1++;
//			else
//				b2++;
//		}
//	}
//	int sum = min(max(a1, b2), max(a2, b1));
//	printf("%d",sum);
//	return 0;
//}


////2841: 聚众打codeforce
//#include<stdio.h>
//int main()
//{
//	char a[7];
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%c", &a[i]);
//	}
//	int n;
//	scanf("%d", &n);
//	if (a[n-1] == 'o')
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}


////2842: szg的情敌
//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n, m;
//		scanf("%d %d", &n, &m);
//		for (int i = 0; i < n; i++)
//		{
//
//		}
//	}
//	return 0;
//}


////2843: 这真的是签到题啊
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	while(t--)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		double sum = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			sum += i;
//		}
//		printf("%.0lf\n", sum);
//	}
//	
//	
//	return 0;
//}