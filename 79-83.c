#define  _CRT_SECURE_NO_WARNINGS 1
//1079: a + b（多实例测试2）
//#include <stdio.h>
//int main()
//{
//	int a=0, b=0;
//	while (scanf("%d%d", &a, &b) != EOF)
//		printf("%d\n", a + b);
//
//}

//1080: a + b（多实例测试3）
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	while (scanf("%d%d", &a, &b),a!=0||b!=0)
//		printf("%d\n", a + b);
//
//}

//1081: n个数求和 （多实例测试）
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int x = 0, y = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		y = 0;
//		for (int j = 0; j < b; j++)
//		{
//			scanf("%d", &x);
//			y += x;
//		}
//		printf("%d\n", y);
//	}
//


//1082: 敲7（多实例测试）
//#include <stdio.h>
//int main()
//{
//	int t = 0,x=0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d", &x);
//		for (int j = 1; j <=x; j++)
//			if (j % 7 == 0 || j % 10 == 7||j/10%10==7||j/100%10==7||j/1000%10==7)
//				printf("%d ", j);
//		printf("\n");
//	}
//	return 0;
//}


//1083: 数值统计(多实例测试)
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n), n!=0)
//	{
//		int z = 0, f = 0, l = 0;
//		for (int i = 0; i < n; i++)
//		{
//			double x = 0;
//			scanf("%lf", &x);
//			if (x > 0)
//				z++;
//			else if (x == 0)
//				l++;
//			else
//				f++;
//		}
//		printf("%d %d %d\n", f, l, z);
//	}
//	return 0;
//}
//
//
