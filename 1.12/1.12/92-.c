#define  _CRT_SECURE_NO_WARNINGS 1


//1092: 素数表(函数专题）
//#include<stdio.h>
//#include<math.h>
//int prime(int x)
//{
//	if (x == 1)
//		return 0;
//	for (int i = 2; i <= (int)sqrt(x); i++)
//	{
//		
//		if (x %i == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		int t=prime(i);
//		if (t)
//			printf("%d ", i);
//	}
//	return 0;
//}


//1093: 验证哥德巴赫猜想（函数专题）
//#include<stdio.h>
//#include<math.h>
//int prime(int x)
//{
//	if (x == 1)
//		return 0;
//	for (int i = 2; i <= (int)sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 3; i <= n / 2; i += 2)
//	{
//		if (prime(i)&&prime(n-i))
//			printf("%d %d\n", i, n - i);
//	}
//	return 0;
//}



//1094: 统计元音（函数专题）
//#include<stdio.h>
//#include<string.h>
//int vowel(char a)
//{
//	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'||a=='E'||a=='A'||a=='I'||a=='O'||a=='U')
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char a;
//	int b = 0,i=0;
//	while (a = getchar(),a != '\n')
//	{
//		 b= vowel(a);
//		 if (b == 1)
//			 i++;
//
//	}
//	printf("%d", i);
//	return 0;
//}