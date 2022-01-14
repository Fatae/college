#define  _CRT_SECURE_NO_WARNINGS 1


//1098: 复合函数求值（函数专题）
//#include<stdio.h>
//#include<math.h>
//double funF(double x)
//{
//	return fabs(x - 3) + fabs(x + 1);
//}
//double funG(double x)
//{
//	return x * x - 3 * x;
//}
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	double a=funG(x);
//	double b = funF(a);
//	printf("%0.2lf", b);
//	return 0;
//}



//1099: 角谷猜想（多实例测试）
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		while(n!=1)
//	{
//		if (n % 2 == 0)
//			n = n / 2;
//		else
//			n = n * 3 + 1;
//		count++;
//	}
//		printf("%d\n", count);
//	}
//	return 0;
//}




//1100: 求组合数（函数专题）
//#include<stdio.h>
//int fact(int n)
//{
//	int i = 1,ret=1;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//	return ret;
//}
//int main()
//{
//	int m, k;
//	scanf("%d %d", &m, &k);
//	int a = fact(m);
//	int b = fact(k);
//	int c = fact(m - k);
//	printf("%d", a / (b * c));
//	return 0;
//}



//1101: 逆序数字（函数专题）
//#include<stdio.h>
//int inverse(int n)
//{
//	int h = 1,x=n,y=0;
//	while (n / 10 != 0)
//	{
//		n = n / 10;
//		h *= 10;
//	}
//	while (x / 10 != 0)
//	{
//		y = y + x % 10 * h;
//		x = x / 10;
//		h = h / 10;
//	}
//	return y+x;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = inverse(n);
//	printf("%d\n", a);
//	printf("%d", a + n);
//	return 0;
//}

//上题函数优化
//int inverse(int num)
//{
//	int sum = 0;
//	while (num != 0)
//	{
//		sum = sum * 10 +num%10;
//		num = num / 10;
//	}
//	return sum;
//}





//1102: 火车票退票费计算（函数专题）
//#include<stdio.h>
//double CancelFee(double price)
//{
//	double a = 0.05 * price;
//	int y = (int)a;
//	while (a >= 1)
//		a--;
//	if (a < 0.25)
//		a = 0;
//	else if (a < 0.75)
//		a = 0.5;
//	else
//		a =1;
//	return y + a;
//}
//int main()
//{
//	double n = 0;
//	scanf("%lf", &n);
//	double a = CancelFee(n);
//	printf("%0.1lf", a);
//	return 0;
//}



//1103: 平均学分绩点（函数专题）
//#include<stdio.h>
//int jidian(int n)
//{
//	int x = 0;
//	if (n >= 60)
//	{
//		x = (n - 50) / 10;
//		return x;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	double x, y, sum1 = 0, sum2 = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf %lf", &x, &y);
//		int ret=jidian(y);
//		sum1 += ret*x;
//		sum2 += x;
//	}
//	printf("%0.1lf", sum1 / sum2);
//	return 0;
//}
 
 
 

//1104: 求因子和（函数专题）
//#include<stdio.h>
//#include<math.h>
//int FacSum(int n)
//{
//	int sum = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			sum = sum + i ;
//	}
//	return sum+1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum=FacSum(n);
//	printf("%d", sum);
//	return 0;
//}



//1105: 判断友好数对（函数专题）
//#include<stdio.h>
//int facsum(int n)
//{
//	int sum = 0;
//	for (int i = 2; i < n; i++)
//	{if(n%i==0)
//		sum += i;
//	}
//	return sum + 1;
//}
//int main()
//{
//	int m = 0, n = 0,flag=0;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		int ret=facsum(i);
//		if (ret > i && i == facsum(ret)&&ret<=n)
//		{
//			printf("%d %d\n", i, ret);
//			flag = 1;
//		}
//		
//	}
//	if (!flag)
//		printf("No answer");
//	return 0;
//}