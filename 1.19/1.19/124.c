#define  _CRT_SECURE_NO_WARNINGS 1


//1124: 两个有序数组合并(此方法时间超限)
//#include<stdio.h>
//int a[1000000], b[1000000];
//int main()
//{
//	int m = 0, n = 0,i=0,j=0;
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (i = m; i < m + n; i++)
//	{
//		a[i] = b[j];
//		j++;
//	}
//	for ( i = 0; i < m + n-1; i++)
//	{
//		for (j = i+1; j < m + n; j++)
//		{
//			if (a[i] <= a[j])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}




//1124: 两个有序数组合并
//#include<stdio.h>
//int a[100000], b[100000];
//int main()
//{
//	int m, n,i,j;
//	scanf("%d", &m);
//	for (i = m - 1; i >= 0; i--)//直接让a[]降序排列
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	
//	int s = 0, k = 0, c[1000000], x = 0;
//	while (s < m && k < n)//a[]和b[]共同的拥有的位数
//	{
//		if (a[s] > b[k])
//			c[x++] = a[s++];
//		else
//			c[x++] = b[k++];
//	}
//	while (s < m)//两个数组多出来的部分
//		c[x++] = a[s++];
//	while (k < n)
//		c[x++] = b[k++];
//	for (i = 0; i < m+n; i++)
//		printf("%d ", c[i]);
//	
//	return 0;
//}



//1128: 课程平均分
//#include<stdio.h>
//double a[1000][11];
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%lf",&a[i][j]);
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		double sum = 0;
//		for (int i = 0; i < m; i++)
//		{
//			sum += a[i][j];
//		}
//		printf("%0.2lf ", sum / m);
//	}
//	return 0;
//}




//1129: 第几天
//#include<stdio.h>
//void run(int month, int day)
//{
//	int i = 0, sum = 0;
//	for (i = 1; i < month; i++)
//	{
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//			sum += 31;
//		else if (i == 2)
//			sum += 29;
//		else
//			sum += 30;
//	}
//	printf("%d", sum+day);
//}
//void ping(int month, int day)
//{
//	int i = 0, sum = 0;
//	for (i = 1; i < month; i++)
//	{
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//			sum += 31;
//		else if (i == 2)
//			sum += 28;
//		else
//			sum += 30;
//	}
//	printf("%d", sum+day);
//}
//int main()
//{
//	int Year, month, day;
//	scanf("%d-%d-%d", &Year, &month, &day);
//	if ((Year % 4 == 0&& Year % 100 != 0) || Year % 400 == 0)
//		run(month, day);
//	else
//		ping(month, day);
//	return 0;
//}


//1130: 杨辉三角(此方法         我不理解         )
//#include<stdio.h>
//int main()
//{
//	int n,s=1;
//	scanf("%d", &n);
//	printf("1\n");
//	for (int i = 2; i <= n; i++)
//	{
//		s = 1;
//		printf("1 ");
//		for (int j = 1; j <= i - 2; j++)
//		{
//			s = (i - j) * s / j;
//			printf("%d ", s);
//		}
//		printf("1\n");
//	}
//	return 0;
//}



//定义数组的方法
//#include<stdio.h>
//int main()
//{
//	int a[100][100], i, j,m;
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}//先把每一行的第一个和最后一个赋为一，以便根据两肩之和求值
//	for (i = 2; i < m; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}//根据两肩之和求值
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j <=i; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}//打印
//	return 0;
//}




//1131: 最常用字符
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int t, a[1000] = {0};
//	while (scanf("%c", &ch), ch != '\n')
//	{
//		if (ch >= 'A' && ch <= 'Z')
//			ch += 32;
//		t = ch - 97;
//		a[t]++;
//	}
//	int max = a[0];
//	for (int i = 1; i <= 25; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	for (int i = 0; i <= 25; i++)
//	{
//		if (a[i] ==max)
//		{
//			printf("%c", i + 97);
//			break;
//		}
//	}
//	return 0;
//}