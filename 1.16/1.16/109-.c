#define  _CRT_SECURE_NO_WARNINGS 1


//1109: ����������ר�⣩
//#include<stdio.h>
//int digitSum(int n)
//{
//	int sum = 0;
//	while (n != 0)
//	{
//		sum += n % 10;
//		n = n / 10;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n > 10)
//	{
//		n=digitSum(n);
//
//	}
//	printf("%d", n);
//	return 0;
//}



//1110: �����ͬ���ȣ�����ר�⣩
//#include<stdio.h>
//int common(int x, int y)
//{
//	if (x == y)
//		return x;
//	else if (x > y)
//		common(x / 2, y);
//	else
//		common(x, y / 2);
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &n, &m);
//	int zu = common(n, m);
//	printf("%d", zu);
//	return 0;
//}




//1111: ����������������������ר�⣩
//#include<stdio.h>
//void inverse(int n)
//{
//	int num = 0;
//
//	scanf("%d", &num);
//	if (n > 1)
//	{
//		inverse(n - 1);
//		printf("%d ", num);
//	}
//	if (n == 1)
//		printf("%d ", num);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	inverse(n);
//	return 0;
//}





//1112: ����ת��������ר�⣩
//#include<stdio.h>
//void convert(int n)
//{
//	if (n > 0)
//	{
//		convert(n / 2);
//		printf("%d", n % 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	convert(n);
//	return 0;
//}




//1113: �ݹ���õĴ���ͳ�ƣ�����ר�⣩
//#include<stdio.h>
//int fib(int k);
//int count = 0;
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));  
//    printf("�ݹ������%d��", count);
//    return 0;
//}
//
//int fib(int k)
//{
//    if (k == 1 || k == 2)
//    {
//        count++;
//        return 1;
//    }
//    else
//    {
//        count++;
//        return fib(k - 1) + fib(k - 2);
//       
//    }
//}




//1114: ����
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int m = n;
//	for (int i = 0; i < m; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		a[n - 1] = x;
//		n--;
//	}
//	for (int j = 0; j < m; j++)
//	{
//		printf("%4d", a[j]);
//	}
//	return 0;
//}


//�ݹ�������
//#include<stdio.h>
//void nixu(int n)
//{
//	int num = 0;
//	if (n > 1)
//	{
//		scanf("%d", &num);
//		nixu(n - 1);
//		printf("%4d", num);
//	}
//	if (n == 1)
//	{
//		scanf("%d", &num);
//		printf("%4d", num);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	nixu(n);
//	return 0;
//}




//1115: ������Сֵ
//#include<stdio.h>
//int a[1001];
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	int x = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] < a[0])
//		{
//			a[0] = a[i];
//			x = i;
//		}
//	}
//	printf("%d %d", a[0], x);
//	return 0;
//}



    