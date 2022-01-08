#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,x=0;
	scanf("%d", &n);
	int g1, m1, x1;
	for (g1 = 0; g1 <= n / 5; g1++)
	{
		for (m1 = 0; m1 <= n / 3; m1++)
		{
			x1 = n - g1 - m1;
			if (n*3 == g1 * 15 + m1 * 9 + x1)
			{
				x = 1;
				printf("%4d%4d%4d\n", g1, m1, x1);
			}
		}
		if(!x)
		printf("No Answer");
	}
	return 0;
}