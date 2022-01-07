#define  _CRT_SECURE_NO_WARNINGS 1
//62
//#include<stdio.h>
//int main()
//{
//	int m, n,q=0,a,x,y;
//	scanf("%d %d", &m, &n);
//	x = m;
//	y = n;
//	
//	while (m % n != 0)
//	{
//		q = m % n;
//		m = n;
//		n= q;
//		
//	}
//	a = x/n*y;
//	printf("%d %d", n,a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a;	
//		while (scanf("%c", &a),a!='@')
//		{
//			
//			 if (a >= 'A' && a <= 'Z')
//				a = a + 32;
//			if (a == 'z')
//				a = 'a';
//			else if (a >= 'a' && a <= 'z')
//			a = a + 1;
//			printf("%c", a);
//		}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int a = 0;
//	while (scanf("%c",&ch),ch!='\n')
//	{
//		
//		if (ch >= '0' && ch <= '9')
//			a++;
//		
//	}
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int letter = 0, digit = 0, other = 0;
//	while (scanf("%c", &ch), ch != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z')
//			letter++;
//		else if (ch >= 'A' && ch <= 'Z')
//			letter++;
//		else if (ch >= '0' && ch <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("letter:%d\n", letter);
//	printf("digit:%d\n", digit);
//	printf("other:%d\n", other);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,q=0;
//	double m=0, x=0;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		q = n % 10;
//		if (q > 4)
//		{
//			q = q - 1;
//		}
//		m = m + q * pow(9, x);
//		n = n / 10;
//		x++;
//	}
//	printf("%.0lf", m);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int d = 0;
//	while (ch = getchar(), ch != '\n')
//		d = d * 2 + (ch - '0');
//	printf("%d", d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, k,i=0;
//	scanf("%d %d", &m, &k);
//	while (m != 0)
//	{
//		m -= 1;
//		i += 1;
//		if (i % k == 0)
//			m += 1;
//	}
//	printf("%d", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	int time = 0, command =0,h=0,w=0;
//	while (scanf("%d %d", &time, &command))
//	{
//		switch (h)
//		{
//		case 0:y += 10 * (time - w);
//			break;
//		case 1:x -= 10 * (time - w);
//			break;
//		case 2:y -= 10 * (time - w);
//			break;
//		case 3:x += 10 * (time - w);
//			break;
//		}
//		if (command == 3)
//			break;
//		else if (command == 1)
//			h = h + 1;
//		else
//			h = h - 1;
//		h = (h + 4) % 4;
//		w = time;
//	}
//	printf("%d %d",x, y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x = 0,i=0;
//	scanf("%d", &x);
//	for (i = 2; i <= x; i++)
//	{
//		while (x % i == 0)
//		{
//			printf("%d ", i);
//			x = x / i;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int high = 0, up = 0, down=0,day=0;
	scanf("%d %d %d", &high, &up, &down);
	for(day=1;;day++)
	{
		
		if (high-up<=0)
		{
			printf("%d", day);
			break;
		}
		else
			high = high - up + down;
	}

	return 0;
}