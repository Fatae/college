#define  _CRT_SECURE_NO_WARNINGS 1


//1132: 数字字符统计
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		char ch;
		int count = 0;
		while (scanf("%c", &ch), ch != '\n')
		{
			if (ch >= '0' && ch <= '9')
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}


//1133: 单词个数统计
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000] = {0};
	gets(a);//scanf无法接收空格
	int count = 0;
	int i = 0;
	for ( i = 0; a[i] != '\0'; i++)//\0是字符串结束的标志
	{
		if (a[i] == ' ' && a[i + 1] != ' ')
			count++;
	}
	if (a[0] != ' ')
		count++;
	if (a[i - 1] == ' ')
		count--;
	printf("%d", count);
	return 0;
}


//1134: 字符串转换
#include<stdio.h>
char a[10000];
int main()
{
	gets(a);
	int i = 0,sum=0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			sum = sum * 10 + (a[i] - '0');//把所有数字组合成一个大的十进制数字
	}
	
		printf("%d", sum * 2);
	return 0;
}



//1135: 算菜价
#include<stdio.h>
int main()
{
	
	double w, p,sum=0;
	while (scanf("%*s%lf%lf", &w, &p) != EOF)//%*就是输入一个字符串但是不影响后面的运行
	{
		sum = sum + w * p;
	}
	printf("%0.1lf", sum);
	return 0;
}




//1136: 首字母变大写
#include<stdio.h>
char a[1000];
int main()
{
	gets(a);
	int i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] >= 'a' && a[i + 1] <= 'z')
			a[i + 1] -= 32;
	}
	if (a[0] != ' ' && a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
	
		puts(a);//puts只能输出字符串会在后面自动加一个回车
		//printf("%s", a);//这个方法也可以打印出来
	return 0;
}
//scanf（）和gets（）及printf（）和puts（）的区别
//http://blog.csdn.net/xingjiarong/article/details/47282817


//1137: 查找最大元素
#include<stdio.h>
char ch[13838];
int main()
{
	gets(ch);
	int i = 0;
	char max = ch[0];
for(i=1;ch[i]!='\0';i++)
{ 
	if (ch[i] > max)
		max = ch[i];
}
for (i = 0; ch[i] != '\0'; i++)
{
	printf("%c", ch[i]);
	if (ch[i] == max)
		printf("(max)");
}
	return 0;
}


//1138: C语言合法标识符
#include<stdio.h>
char a[51];
int main()
{
	gets(a);
	int i = 0,flag=0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (i==0&&a[i] >= '0' && a[i] <= '9')
		{
			flag = 1;
			break;
		}
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || a[i] == '_' || (a[i] >= '1' && a[i] <= '9'))
		{
			continue;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	
	if (flag == 1)
		printf("no");
	else
		printf("yes");
	return 0;
}



//1139: 输出最短字符串
#include<stdio.h>
#include<string.h>
char a[1001], b[1001];
int main()
{
	int n = 0,h,q;
	scanf("%d", &n);
	getchar();//吸收上面scanf的回车
	gets(b);
	h = strlen(b);
	for (int i = 1; i < n; i++)
	{
		gets(a);
		q = strlen(a);
		if (h > q)
		{
			strcpy(b, a);
			h = q;
		}
	}
		puts(b);
	return 0;
}



//1140: 小数点后第n位 多实例
#include<stdio.h>
#include<string.h>
char a[1000];
int main()
{
	int n = 0,x,k=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		scanf("%d", &x);
		k = 0;
		for (int j = 0; a[j] != '.'; j++)
		{
			k++;
		}
		if (strlen(a) > k + x )
			printf("%c", a[k + x ]);
		else
			printf("0");
		printf("\n");
	}
	return 0;
}