#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n,j,u;
	scanf("%d %d", &m, &n);
	int t = n - 2 * m;
	if (t % 2 == 0)
	{
		u = t / 2;
		j = m - u;
		if(j>0)
		printf("%d %d", j, u);
		else
			printf("No Answer");
	}
	else
		printf("No Answer");
}