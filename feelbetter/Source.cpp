#include<stdio.h>
int main()
{
	char c = 254;
	int n, x, y;
	scanf_s("%d", &n);
	for (y = 1; y <= n; y++)
	{
		if (y == 1 || y == n)
		{
			for (int i = 1; i <= n; i++)
			{
				printf("%c ", c);
			}
			printf("\n");
		}
		else
		{
			for (x = 1; x <= n; x++)
			{
				if (x == 1 || x == n)
				{
					printf("%c ", c);
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}