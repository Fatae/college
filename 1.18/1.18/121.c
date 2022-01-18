#define  _CRT_SECURE_NO_WARNINGS 1
//1121: 电梯
//#include<stdio.h>
//int main()
//{
//    int N, m, t, i, sum = 0, j, n;
//    scanf("%d", &N);
//    scanf("%d", &n);
//    sum = n * 6;
//    for (i = 1; i < N; i++)
//    {
//        scanf("%d", &m);
//        if (m - n > 0)
//        {
//            t = m - n;
//            sum += t * 6;
//            n = m;
//        }
//        if (m - n < 0)
//        {
//            t = n - m;
//            sum += t * 4;
//            n = m;
//        }
//    }
//    j = sum + N * 5;
//    printf("%d", j);
//    return 0;
//}



//上题数组做法
//#include<stdio.h>
//int main()
//{
//	int n, a[1111], i,sum=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (i == 0)
//			sum += a[i] * 6;
//		else if (a[i - 1] > a[i])
//			sum += (a[i - 1] - a[i]) * 4;
//		else
//			sum += (a[i] - a[i - 1]) * 6;
//	}
//
//	printf("%d", sum + n * 5);
//	return 0;
//}
//




//1122: 小明的调查作业(这个代码有问题，不知道哪有问题)
//#include<stdio.h>
//void Del(int a[], int N,int j,int count)
//{
//	for (int i = j; i < N-count-1; i++)
//		a[i] = a[i +1];
//}
//int chachong(int a[], int N)
//{
//	int i = 0, j = 0,count=0;
//	for (i = 0; i < N-count-1; i++)
//	{
//		for (j = i + 1; j < N-count; j++)
//		{
//			if (a[i] == a[j])
//			{
//				Del(a, N, j,count);
//				count++;
//			}
//		}
//	}
//	return count;
//}
//void PrintArr(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	int N, a[11111],count=0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	count=chachong(a, N);
//	int t = N - count;
//	for (int j = 0; j < t-1; j++)
//	{
//		for (int k = j + 1; k < t; k++)
//		{
//			if (a[j] > a[k])
//			{
//				int temp = a[j];
//				a[j] = a[k];
//				a[k] = temp;
//			}
//		}
//	}
//	printf("%d\n", t);
//	PrintArr(a, t);
//	return 0;
//}
// 
// 
// 
// 
// 1122: 小明的调查作业
//#include<stdio.h>
//
//
//int main()
//{
//	int N, a[11111];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	for(int i=0;i<N-1;i++)
//		for (int j = i + 1; j < N; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	int m = N;
//	for (int i = 0; i < N; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			a[i] = 0;
//			m--;
//		}
//	}
//	printf("%d\n", m);
//	for (int i = 0; i < N; i++)
//	{
//		if (a[i] == 0)
//			continue;
//		else
//			printf("%d ", a[i]);
//	}
//	return 0;
//}



//1123: 最佳校友
//#include<stdio.h>
//int main()
//{
//	int n = 0, a[100] = {0};
//	while (scanf("%d", &n), n >= 0)
//	{
//		a[n]++;
//		
//	}
//	int max = a[0];
//	for (int i = 1; i < 100; i++)
//	{
//		if (a[i] >= max)
//			max = a[i];
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		if (a[i] == max)
//			printf("%d ", i);
//	}
//}