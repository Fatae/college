#define  _CRT_SECURE_NO_WARNINGS 1


////1155: 字符串比较 多实例
//#include<stdio.h>
//#include<string.h>
//char a[10000], b[10000];
//int main()
//{
//	
//	while (scanf("%s %s", a,b) != EOF)
//	{
//		int l1 = strlen(a);
//		int l2 = strlen(b);
//		for (int i = 0; i < l1; i++)
//		{
//			if (a[i] >= 'a')
//				a[i] = (a[i] - 'a') * 2 + 1;
//			else
//				a[i] = (a[i] - 'A') * 2;
//		}
//		for (int i = 0; i < l2; i++)
//		{
//			if (b[i] >= 'a')
//				b[i] = (b[i] - 'a') * 2 + 1;
//			else
//				b[i] = (b[i] - 'A') * 2;
//		}//将大写字母赋为偶数，小写字母赋为奇数
//		if (strcmp(a, b)<0)//strcmp函数若a>b返回值大于零，a<b返回值小于零，否则返回值为零
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}



////1156: 单数变复数(我的做法)
//#include<stdio.h>
//#include<string.h>
//char a[23];
//int main()
//{
//	scanf("%s", a);
//	int l = strlen(a)-1;//注意要减一，字符串下标是从0开始的
//	if (a[l] == 'o')
//	{
//		a[l + 1] = 'e';
//		a[l + 2] = 's';
//	}
//	else if (a[l] == 'y' && (a[l - 1] != 'a' && a[l - 1] != 'e' && a[l - 1] != 'i' && a[l - 1] != 'o' && a[l - 1] != 'u'))
//	{
//		a[l] = 'i';
//		a[l + 1] = 'e';
//		a[l + 2] = 's';
//	}
//	else if (a[l] == 's' || a[l] == 'x' || (a[l - 1] == 'c' && a[l] == 'h') || (a[l - 1] == 's' && a[l] == 'h'))
//	{
//		a[l + 1] = 'e';
//		a[l + 2] = 's';
//	}
//	else
//		a[l + 1] = 's';
//	printf("%s", a);
//	return 0;
//}



////1156: 单数变复数(别人的写法)
//#include<stdio.h>
//#include<string.h>
//char a[] = "es", b[] = "s", c[23];
//int main()
//{
//	
//	scanf("%s", c);
//	int l = strlen(c) - 1;
//	if (c[l] == 'o' || c[l] == 's' || c[l] == 'x' || (c[l] == 'h' && (c[l - 1] == 's' || c[l - 1] == 'c')))
//	{
//		strcat(c,a);
//	}
//	else if (c[l] == 'y')
//	{
//		c[l] = 'i';
//		strcat(c, a);
//	}
//	else
//		strcat(c, b);
//	printf("%s", c);
//	return 0;
//}//不要字符串名称搞混


////1157: 连续的n个1
//#include<stdio.h>
//char a[1000];
//int main()
//{
//	int n = 0,count=0;
//	scanf("%s", a);
//	scanf("%d", &n);
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		int t = 0;
//		for (int j = i; j < i + n; j++)
//		{
//			if (a[j] != '1')
//				break;
//			else
//				t++;//有1便加加，然后判断是否和n相等
//			if (t == n)
//				count++;
//
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



