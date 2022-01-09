#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0,n=0;
	int a = 0, b = 0,s=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		s = a + b;
		printf("%d\n", s);
	}
	return 0;
}