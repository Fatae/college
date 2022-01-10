#define  _CRT_SECURE_NO_WARNINGS 1


//1084: 计算两点间的距离（多实例测试）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x1 = 0, y1 = 0, x2= 0, y2 = 0;
//	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2)!=EOF)
//	{
//		printf("%0.2lf\n", sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
//	}
//	return 0;
//}



//1085: 求奇数的乘积（多实例测试）
//#include<stdio.h>
//int main()
//{
//	int x=0,n;
//	while (scanf("%d", &x) != EOF)
//	{
//		int i = 0;
//		int t = 1;
//		for (i = 0; i < x; i++)
//		{
//			scanf("%d", &n);
//			if (n % 2 == 1||n%2==-1)
//				t *= n;
//		}
//		printf("%d\n", t);
//	}
//	return 0;
//}


//1086: ASCII码排序（多实例测试）
//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	int i = 0;
//	while (scanf("%c%c%c", &a, &b, &c) != EOF)
//	{
//		char t;
//		getchar();
//		if (a > b)
//		{
//			t = a;
//			a = b;
//			b = t;
//		}
//		if (b > c)
//		{
//			t = b;
//			b = c;
//			c = t;
//		}
//		if (a > b)
//		{
//			t = a;
//			a = b;
//			b = t;
//		}
//		printf("%c %c %c\n", a, b, c);
//	}
//	return 0;
//}



//1087: 获取出生日期（多实例测试)
//#include<stdio.h>
//int main()
//{
//	int i = 0,n=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int x, y, z;
//		scanf("%*6d%4d%2d%2d%*d", &x, &y, &z);//%*表示忽略后面的数
//		printf("%d-%02d-%02d\n", x, y, z);//%02d表示若位数不足两位左边补零
//	}
//
//	return 0;
//}