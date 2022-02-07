#define  _CRT_SECURE_NO_WARNINGS 1

////问题 A : 探基不识火柴棒
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[10000];
//	scanf("%s", a);
//	int l = strlen(a);
//	int sum = 0;
//	for (int i = 0; i < l; i++)
//	{
//		a[i] = a[i] - '0';
//		if (a[i] == 0)
//			sum += 6;
//		else if (a[i] == 1)
//			sum += 2;
//		else if (a[i] == 2)
//			sum += 5;
//		else if (a[i] == 3)
//			sum += 5;
//		else if (a[i] == 4)
//			sum += 4;
//		else if (a[i] == 5)
//			sum += 5;
//		else if (a[i] == 6)
//			sum += 6;
//		else if (a[i] == 7)
//			sum += 3;
//		else if (a[i] == 8)
//			sum += 7;
//		else
//			sum += 6;
//
//	}
//	printf("%d", sum);
//	return 0;
//}


////2816: 探姬的名字
//#include<stdio.h>
//int main()
//{
//	int m, n, sum=0;
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}


////2817: 探姬的晨跑计划
//#include<stdio.h>
//int main()
//{
//	int month, week;
//	int m, n,day,sum=0;
//	scanf("%d %d", &month, &week);
//	scanf("%d %d", &m, &n);
//		if (month == 2)
//		day = 28;
//	else if (month == 4 || month == 5 || month == 6 || month == 9 || month == 11)
//		day = 30;
//	else
//		day = 31;
//		for (int i = 0; i < day; i++)
//		{
//			if (week > 6)
//				week=0;
//			if (week == 0)
//			{
//				week++;
//				continue;
//			}
//			if (week % 2 == 0)
//			{
//				sum += n;
//				week++;
//				
//			}
//			else if (week % 2 == 1)
//			{
//				sum += m;
//				week++;
//			}
//		}
//		printf("%d", sum);
//}


//2818: 探姬的购物车（这个不对）(已经对了，很难分明白每种情况的条件时，就每种情况都算算)
//#include<stdio.h>
//int main()
//{
//	double m, n,b;
//	scanf("%lf %lf", &m, &n);
//	double a,price,sum=0;
//	scanf("%lf", &a);
//	while (scanf("%lf %lf", &price, &b) != EOF)
//	{
//		sum = sum + price*b;
//	}
//	double sum1 = sum,summ=sum;
//	while (sum1 >= m)
//	{
//		sum1 -= m;
//		sum -= n;
//	}
//	summ = summ * a;
//	double summ1 = summ;
//	while (summ1 >= m)
//	{
//		summ1 -= m;
//		summ -= n;
//	}
//	printf("%.2lf", sum > summ ? summ : sum);
//	return 0;
//}



////2819: 探姬去上课
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m,a,sum=0,t=0;
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a);
//		if (a < n)
//		{
//			sum += 5;
//			t++;
//		}//电梯停了t次，下面减去
//	}
//	sum = sum + 2 * (n - t - 1);
//	printf("%d", sum);
//	return 0;
//}



//2820: 探姬痴心帮助同学(不会)
//#include<stdio.h>
//int main()
//{
//	int  b=0;
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		a = a - '0';
//		b = b * 10 + a;
//		if (b > 20)//字母、数字、空格、标点符号的ASCII值均大于20小于124
//		{
//			printf("%c", b);//%c就是输出原字符串内容
//			b = 0;
//		}
//	}
//	return 0;
//}


/////2821: 探姬环游世界
//#include<stdio.h>
//int main()
//{
//	int n,a[100000],count=0;
//	scanf("%d", &n);
//	
//	for (int j = 0; j < n; j++)
//	{
//		scanf("%d", &a[j]);
//	}
//	if (a[0] == 0)
//		count++;
//	for (int i = 1; i < n; i++)
//	{
//		
//		if (a[i - 1] !=0 && a[i] == 0)
//			count++;
//		else
//			continue;
//	}
//	printf("%d", count);
//	return 0;
//}



//2822: 探姬粉丝众多(本质是解方程设一行有h人，总共有sum人，列两个方程，特例，两个都在第一行可以直接求解)
//#include<stdio.h>
//int main()
//{
//	int num1, h1, l1, num2, h2, l2,sum=0;
//	scanf("%d %d %d", &num1, &h1, &l1);
//	scanf("%d %d %d", &num2, &h2, &l2);
//	if (h1 == h2 && h1 > 1)
//	{
//		printf("sorry!");
//	}
//	else if (h1 * h2 == 1)
//		printf("%d", l1 + num1 - 1);//都在第一行
//	else
//	{
//		int h = (l2 - l1 + num2 - num1) /( h1 - h2);
//		printf("%d", sum=(h1 - 1) * h + l1 + num1 - 1);
//	}
//	return 0;
//}


