#define  _CRT_SECURE_NO_WARNINGS 1


/////1153: 简易版最长序列
//#include<stdio.h>
//int a[99999];
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int max = 0;
//	while(n--)
//	{
//		int m;
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < m - 1; i++)
//		{
//			for (int j = i + 1; j < m; j++)
//				if (a[i] > a[j])
//				{
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//		}
//		int count = 1, max = 1;
//		for (int i = 1; i < m; i++)
//		{
//			if (a[i] == a[i - 1])
//				count++;
//			else
//				count = 1;
//			if (max < count)
//				max = count;
//		}
//		printf("%d\n", max);
//	}
//	
//	return 0;
//}



////1154: 校门外的树
#include<stdio.h>
int main()
{

	return 0;
}