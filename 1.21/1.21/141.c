#define  _CRT_SECURE_NO_WARNINGS 1


//1141: ����ת��
//#include<stdio.h>
//void convert(int n, char str[])
//{
//	int i = 0;
//	if (n == 0)
//		printf("0");
//	for (i = 0; n != 0; i++)
//	{
//		str[i] = n % 2;
//		n = n / 2;
//	}
//	for (int j = i-1; j >= 0; j--)//str[i]����һ��ѭ����δ����ѭ����i++���жϲ�����������ѭ��
//		printf("%d", str[j]);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char str[33] = { 0 };
//	convert(n, str);
//	return 0;
//}



//1142: ���������Ĵ�С
//#include<stdio.h>
//int bToD(char str[])
//{
//	int sum = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		sum = sum * 2 + str[i] - '0';
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0,a[22];
//	char str[31] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", str);
//		a[i] = bToD(str);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for(int j=i+1;j<3;j++)
//			if (a[i] > a[j])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//1143: ���ֵ�����ֽ���
//#include<stdio.h>
//int KToD(char str[], int k)
//{
//	int sum = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		sum = sum * k + str[i] - '0';
//	}
//	return sum;
//}//���������ת��Ϊʮ����
//int main()
//{
//	int n = 0,a[3232];
//	char b[33];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int k = 0;
//		scanf("%s %d", b,&k);
//		a[i]=KToD(b, k);
//	}
//	int max = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("%d", max);
//	return 0;
//}



//1144: ���ֽ���
//#include<stdio.h>
//void dToK(int n, int k, char str[])
//{
//	int i = 0;
//	if (n == 0)
//		printf("0");
//	for (i = 0; n != 0; i++)
//	{
//		str[i] = n % k;
//		n = n / k;
//	}
//	for (int j = i-1; j >= 0; j--)
//	{
//		printf("%d", str[j]);
//	}
//	printf("\n");
//}//��ʮ����ת��Ϊ�������
//int main()
//{
//	int n = 0;
//	char str[232];
//	scanf("%d", &n);
//	int k = 2;
//	dToK(n, k, str);
//	 k = 3;
//	dToK(n, k, str);
//	 k = 7;
//	dToK(n, k, str);
//	 k = 8;
//	dToK(n, k, str);
//	return 0;
//}




//1145: ���������̱�2��
//#include<stdio.h>
//void you(char str[])
//{
//	int i = 0,sum=0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] > '4')
//			str[i] = str[i] - 1;//str[i]-'1'����һ����λ���������ټ�ȥ��0���Ļ��ͱ�ɸ�����
//		sum = sum * 9 + str[i]  - '0';
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	you(str);
//	return 0;
//}




//1146: ���ǹ�
//#include<stdio.h>
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int N = 0;
//		scanf("%d", &N);
//		int a[10000000];
//		int sum = 0;
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &a[j]);
//			sum += a[j];
//		}
//		int max = a[0];
//		for (int f = 1; f < N; f++)
//		{
//			if (a[f] > max)
//				max = a[f];
//		}
//		if (max <= sum - max + 1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}//����������ĳ��������������



//1147: ����������
//#include<stdio.h>
//int main()
//{
//	int a[100] = {0}, b[100] = { 0 };
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++) 
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	int j = 0,i=0,find=0;
//	for ( i = 0; i<m;i++)
//	{
//		if (b[0] == a[i])
//		{
//			find = 1;
//			for (j = 1; j < n; j++)
//			{
//				if (b[j] != a[i + j])
//				{
//					find = 0;
//					break;
//					
//				}
//				
//			}
//		}
//		if (find == 1)
//			break;
//	}
//	if (find==0)
//		printf("No Answer");
//	else
//		printf("%d", i);
//	return 0;
//}



