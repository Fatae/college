#define  _CRT_SECURE_NO_WARNINGS 1



//1095: 时间间隔（函数专题）
//#include<stdio.h>
//int HmsToS(int h, int m, int s)
//{
//	return h * 3600 + m * 60 + s;
//}
//void PrintTime(int t)
//{
//	
//		printf("%02d:%02d:%02d\n",t / 3600, t % 3600 / 60, t % 3600 % 60);
//
//}
//int main()
//{
//	int h1, m1, s1, h2, m2, s2;
//	while(scanf("%d:%d:%d", &h1, &m1, &s1)!=EOF)
//	{
//		int t1 = HmsToS(h1, m1, s1);
//		scanf("%d:%d:%d", &h2, &m2, &s2);
//		int t2 = HmsToS(h2, m2, s2);
//		int t = t2 - t1;
//		PrintTime(t);
//	}
//	
//	return 0;
//}




//1096: 水仙花数（函数专题）
//#include<stdio.h>
//#include<math.h>
//int narcissus(int n)
//{
//	double t = pow(n / 100%10, 3) + pow(n / 10 % 10, 3) + pow(n%10, 3);
//	if (n == (int)t)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n,m;
//	while (scanf("%d %d", &m, &n) != EOF)
//	{
//		int x = 0,b=0;
//		for (int i = m; i <= n; i++)
//		{
//			
//			int a=narcissus(i);
//			if (a == 1)
//			{
//				x = 1;
//				b++;
//				if (b ==1 )
//					printf("%d", i);
//				else
//					printf(" %d", i);
//			}
//		}
//		if (!x)
//			printf("no");
//		printf("\n");
//	}
//	return 0;
//}




//1097: 计算平均成绩（函数专题）
//#include<stdio.h>
//#include<string.h>
//int getScore(char g)
//{
//	switch(g)
//	{
//	case'A':return 95;
//		break;
//	case'B':return 85;
//		break;
//	case'C':return 75;
//		break;
//	case'D':return 65;
//		break;
//	case'E':return 40;
//		break;
//	default:printf("error");
//		break;
//	}
//}
//int main()
//{
//	double sum = 0,n=0;
//	double t=0;
//	char ch;
//	while (scanf("%c",&ch),ch != '\n')
//	{
//		
//		 t=getScore(ch);
//		 sum += t;
//		 n++;
//
//	}
//	printf("%0.1lf", sum / n);
//	return 0;
//}