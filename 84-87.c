#define  _CRT_SECURE_NO_WARNINGS 1


//1084: ���������ľ��루��ʵ�����ԣ�
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



//1085: �������ĳ˻�����ʵ�����ԣ�
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


//1086: ASCII�����򣨶�ʵ�����ԣ�
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



//1087: ��ȡ�������ڣ���ʵ������)
//#include<stdio.h>
//int main()
//{
//	int i = 0,n=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int x, y, z;
//		scanf("%*6d%4d%2d%2d%*d", &x, &y, &z);//%*��ʾ���Ժ������
//		printf("%d-%02d-%02d\n", x, y, z);//%02d��ʾ��λ��������λ��߲���
//	}
//
//	return 0;
//}