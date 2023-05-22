#include<stdio.h>
int main()
{
	int a, b, c, n;
	scanf_s("%d", &n);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("* ");
			for (c = a; c <= b; c++)
			{
				printf("\n");
			}
		}
	}
	return 0;
}