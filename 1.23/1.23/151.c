#define  _CRT_SECURE_NO_WARNINGS 1


//1151: 大整数加法(。。。。。。。。。。)
#include<stdio.h>
#include<string.h>

int main()
{
	char a[1000], b[1000];
	int a1[1000], a2[1000], a3[1001];
	int c = 0;
	scanf("%d", &c);
	while (c--)
	{
		memset(a1, 0, sizeof(a1));
		memset(a2, 0, sizeof(a2));
		memset(a3, 0, sizeof(a3));//初始化
		
		scanf("%s%s", a, b);
		int n = 0,l1,l2;
		l1 = strlen(a);
		l2 = strlen(b);
		if (l2 > l1)
		{
			n = l2 - l1;
			for (int i = 0; i < l2; i++)
			{
				a2[i] = b[i] - '0';//将b中的字符数字变成a中的整形
				if (i < l1)
				{
					a1[i + n] = a[i] - '0';//将前面a比b多的位数补成零
				}
			}
		}
		else
		{
			n = l1 - l2;
			for (int i = 0; i < l1; i++)
			{
				a1[i] = a[i] - '0';
				if (i < l2)
					a2[i + n] = b[i] - '0';
			}
		}
		if (l1 < l2)
		{
			n = l1;
			l1 = l2;
			l2 = n;
		}
		n = 0;
		for (int i = l1 - 1; i >= 0; i--)
		{
			a3[i] = a1[i] + a2[i] + n;//n为补位的数字
			n = 0;
			if (i > 0)
			{
				if (a3[i] >= 10)
				{
					a3[i] = a3[i] % 10;
					n = 1;
				}
			}
		}

		for (int i = 0; i < l1; i++)
		{
			printf("%d", a3[i]);
		}
		printf("\n");
	}
	return 0;
}




//1152: 二分搜索
#include<stdio.h>
int efcz(int a[], int light, int right, int x)
{
	int m = 0;
	if (light > right)
		return -1;
	else
	{
		m = (right + light) / 2;
		if (a[m] == x)
			return m;
		else
		{
			if (a[m] < x)
				return efcz(a,m+1, right, x);
			else
				return efcz(a, light,m-1, x);
		}
	}
	
}
int a[1000000];
int main()
{
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int m = 0,j=0,x;
	scanf("%d", &m);
	for (j = 0; j < m; j++)
	{
		scanf("%d", &x);
		int t=efcz(a,0,n-1,x);
		if (t == -1)
			printf("Not found!\n");
		else
			printf("%d\n", t);
	}
	return 0;
}



//1158: 又是排序（指针专题）
#include<stdio.h>
void psort(int* pa, int* pb, int* pc, int* pd)
{
	int a[4];
	a[0] = *pa;
	a[1] = *pb;
	a[2] = *pc;
	a[3] = *pd;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 4; j++)
		{
			if (a[i] < a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	*pa = a[0];
	*pb = a[1];
	*pc = a[2];
	*pd = a[3];
}
int main()
{
	int* pa, * pb, * pc, * pd;
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	pa = &a; pb = &b; pc = &c; pd = &d;
	psort(pa, pb, pc, pd);
	printf("%d %d %d %d", *pa, *pb, *pc, *pd);
	return 0;
}



//1159: 最大的两个数（指针专题）
#include<stdio.h>
void LargestTow(int a[], int n, int* pfirst, int* psecond)
{
	int t = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}

		}
	}
	pfirst = &a[0];
	psecond = &a[1];
	printf("%d %d\n", *pfirst, *psecond);
}
int main()
{
	int n,a[1001];
	scanf("%d", &n);
	int* pfirst, * psecond;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	pfirst = &a[0]; psecond = &a[1];
	LargestTow(a, n, pfirst, psecond);
	return 0;
}


//1161: 字符串长度（指针专题）
#include<stdio.h>
int len(char* sp)
{
	int count = 0;
	while (*sp != '\0')
	{
		if (*sp != ' ')
			count++;
		sp++;
	}
	return count;
}
int main()
{
	char a[100];
	gets(a);
	int t=len(a);
	printf("%d", t);
	return 0;
}



