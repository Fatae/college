#define  _CRT_SECURE_NO_WARNINGS 1


//1088: �ֻ��̺� ����ʵ����
//#include<stdio.h>
//int main()
//{
//	int N = 0,n=0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%*6d%5d", &n);
//		printf("6%05d\n", n);
//	}
//	return 0;
//}


//1089: �׳˵����λ
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double ret = 1;
//	scanf("%d", &n);
//	for (int i = n; i>=1; i--)
//	{
//		ret *= i;
//			while(ret>=10)
//		{
//			ret /= 10;
//		}//��������λ����Ӱ��
//
//	}
//	
//	printf("%d", (int)ret);//(int)ǿ������ת��
//	return 0;
//}



//1090: �����ݣ���ʵ�����ԣ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int x = 0, y = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &x,&y);
//		int ret = 1;
//		for (int j = 0; j < y; j++)
//		{
//			ret *= x;
//			ret %= 1000;
//		}//������������ȡ��ͳ�һ��ȡ��һ�ν����ͬ����8*8*8��%7=8%7*8%7*8%7
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//1091: ͯ����������£���ʵ�����ԣ�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n),n!=0)
//	{
//		int a1 = 1, a2 = 2, a3 = 0;
//		if (n == 1)
//			printf("%d\n",a1);
//		if (n == 2)
//			printf("%d\n",a2);
//		if (n > 2)
//		{
//			for (int i = 2; i < n; i++)
//			{
//				a3 = a2 + a1;
//				a1 = a2;
//				a2 = a3;
//			}
//			printf("%d\n", a3);
//		}
//	}
//	return 0;
//}