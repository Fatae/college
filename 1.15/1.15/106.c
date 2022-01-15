#define  _CRT_SECURE_NO_WARNINGS 1


//1106: 回文数（函数专题）
//int hui(int x)
//{
//	int t = 0;
//	while (x != 0)
//	{
//		 t = t*10+x%10;
//		 x = x / 10;
//	}
//	return t;
//}//逆序数字
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		int t = hui(i);
//		if (t == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



//1107: 回文数猜想（函数专题）
//#include<stdio.h>
//int inverse(int n)
//{
//	int sum = 0;
//	while (n != 0)
//	{
//		sum = sum * 10 + n % 10;
//		n = n / 10;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0,m=0;
//	scanf("%d", &n);
//	while (m = inverse(n), m != n)
//	{
//		printf("%d ", n);
//		n = m + n;
//	}
//	printf("%d", m);
//	return 0;
//}




//1108: 打印数字图形（函数专题）
//#include<stdio.h>
//void PrintSpace(int x)
//{
//	for (int i = 0; i < x; i++)
//		printf(" ");
//}
//void PrintDigit(int x)
//{
//	for (int i = 1; i <= x; i++)
//		printf("%d", i);
//	for (int i = x - 1; i >= 1; i--)
//		printf("%d", i);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		PrintSpace(n-i);
//		PrintDigit(i);
//		printf("\n");
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		PrintSpace(i);
//		PrintDigit(n-i);
//		printf("\n");
//	}
//	return 0;
//}




