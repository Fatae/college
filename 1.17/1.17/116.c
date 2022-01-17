#define  _CRT_SECURE_NO_WARNINGS 1



1116: 删除元素
#include<stdio.h>
int a[11];
void del(int a[], int n, int i)
{
		for (int j = i; j < n; j++)
			a[j] = a[j + 1];
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		printf("%d", a[i]);
		if (i < n - 2)
			printf(" ");
	}
}
int main()
{
	int n = 0,i=0;
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
		scanf("%d", &a[j]);
	scanf("%d", &i);
	del(a, n, i);
	PrintArr(a, n);
	return 0;
}




1117: 查找数组元素
#include<stdio.h>
int find(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
			return i;
	}
	return -1;
}
void del(int a[], int n, int i)
{
	for (int j = i; j < n; j++)
		a[j] = a[j + 1];
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		printf("%4d", a[i]);
		
	}
}
int main()
{
	int a[11],n=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int x = 0;
	scanf("%d", &x);
	int y=find(a, n, x);
	if (y == -1)
		printf("Not Found");
	else
	{
		del(a, n, y);
		PrintArr(a, n);
	}
	return 0;
}





1118: 数列有序
#include<stdio.h>
int insert(int a[], int n, int num)
{
	int i = 0;
	for (i = n-1; i >=0; i--)
	{
		if (num < a[i])
		{
			a[i + 1] = a[i];//a[6]未被赋值，所以可以等于前值，不修改其他值
		}
		else
			break;
	}
	a[i + 1] = num;
	n += 1;
	return n;
	
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(" ");
	}
}
int main()
{
	int a[1001];
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int num = 0;
	scanf("%d", &num);
	n=insert(a, n, num);
	PrintArr(a, n);
	return 0;
}





1119: 一维数组排序
#include<stdio.h>
void sort(int a[], int n)
{
	int j, t, i;
	for ( i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i]=a[j];
				a[j] = t;
			}
		}
	}
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(" ");
	}
}
int main()
{
	int a[101];
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	 sort(a, n);
	 PrintArr(a, n);
	return 0;
}




1120: 最值交换
#include<stdio.h>
int MinIndex(int a[], int n)
{
	int min = a[0],i=0,t=0;
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			t = i;
		}
	}
	return t;
}
int MaxIndex(int a[], int n)
{
	int max = a[0], i = 0, t = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] >max)
		{
			max = a[i];
			t = i;
		}
	}
	return t;
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(" ");
	}
}
int main()
{
	int a[111], n = 0,i=0;
	scanf("%d", &n);
	int q = n - 1;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int x = MinIndex(a, n);
	
	int temp = 0;
	temp = a[0];
	a[0] = a[x];
	a[x] = temp;
	int y = MaxIndex(a, n);
	temp = a[q];
	a[q] = a[y];
	a[y] = temp;
	PrintArr(a,n);
	return 0;
}



