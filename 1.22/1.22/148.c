#define  _CRT_SECURE_NO_WARNINGS 1

//1148: 组合三位数之一(思路：先找到由不同的三个数组成的能开方是整数的三位数，再找这些数中由不同的9个数组成的三个三位数)
#include<stdio.h>
#include<math.h>
int panduan(int a, int b, int c)
{
	int i = 0, q[10] = {0};
	while (a)
	{
		i = a % 10;
		q[i]++;
		a /= 10;
	}
	while (b)
	{
		i = b % 10;
		q[i]++;
		b/= 10;
	}
	while (c)
	{
		i = c % 10;
		q[i]++;
		c /= 10;
	}
	for (i = 1; i <= 9; i++)
		if (q[i] != 1)
			return 0;
	return 1;//如果全等于1则返回1
}//判断不同的三位数中是否有相同的数字
int main()
{
	int b, a[122],g=0, h, i, j,n;
	for (i = 1; i <= 9; i++)
	{
		for (h = 1; h <= 9; h++)
		{
			for (j = 1; j <= 9; j++)
			{
				if (i == h || h == j || j == i)//判断一个三位数中是否有相同的数字
					continue;
				
					n = i * 100 + h * 10 + j;
				
				b = sqrt(n);
				if (b * b == n)
					a[g++] = n;
			}
		}
	}
	for (i = 0; i <= g; i++)
	{
		for (j = i+1 ; j <= g; j++)
		{
			for (h = j+1 ; h <= g; h++)
			{
				int t=panduan(a[i], a[j], a[h]);
				if (t == 1)
					printf("%d %d %d", a[i], a[j], a[h]);
			}
		}
	}
	return 0;
}



//1149: 组合三位数之二
//#include<stdio.h>(时间超限)
//int main()
//{
//	int i, h, j,n=0,a[121],s=0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			for (h = 1; h <= 9; h++)
//			{
//				if (i = j || j == h || h == i)
//					continue;
//				n = i * 100 + j * 10 + h;
//				a[s++] = n;
//			}
//		}
//	}
//	for (i = 0; i <= s; s++)
//	{
//		for (j = i + 1; j <= s; j++)
//		{
//			if (a[j] == 2 * a[i])
//				for (h = j + 1; h <= s; h++)
//				{
//					if (a[h] == 3 * a[i])
//						printf("%d %d %d", a[i], a[j], a[h]);
//					else
//						continue;
//				}
//			else
//				continue;
//		}
//	}
//	return 0;
//}



//1149: 组合三位数之二
#include<stdio.h>
int panduan(char b[])
{
	int a[121] = {0};
	for (int i = 0;i<=9; i++)
	{
		int t = b[i]-'0';
		a[t]++;
    }
for (int i = 1; i <= 9; i++)
{
	if (a[i] != 1)
		return 0;
	
}
   return 1;
}
int main()
{
	int i = 0;
	char b[100] = {0};
	for (i = 123; i <= 329; i++)
	{
		sprintf(b,"%d%d%d" ,i, i * 2, i * 3);//把后面打印到字符串b中
		if (panduan(b) == 1)
			printf("%d %d %d\n", i, i * 2, i * 3);
	}
	return 0;
}




//1150: 数数多少个整数
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[1000] = { 0 };
	gets(a);
	int i = 0;
	int count = 0,flag=0,sum=0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (isdigit(a[i]) && flag == 0)//isdigit是判断一个字符是否是数字字符，是返回非零，否则返回零
		{
			if (a[i] == '0' && isdigit(a[i + 1]))
			{
				sum++;
				continue;
			}
			sum++;
			flag = 1;
		}
		if (!isdigit(a[i]))
			flag = 0;//只有a[i]不是数字的时候flag=0才继续加
	}
	printf("%d", sum);
	return 0;
}


