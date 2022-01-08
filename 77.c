#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	for (int i = 1-n; i<n; i++)
	{
		for (j = 1-n; j < n; j++)
		{
			if (fabs(i) + fabs(j) == n - 1)
				printf("*");
			else
				printf(" ");	
		}
		printf("\n");
	}

	return 0;
}