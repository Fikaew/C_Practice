#include<stdio.h>
#include<math.h>
int main()
{
	int n, x, y;
	scanf_s("%d", &n);
	for (y = n - 1; y >= -(n - 1); y--)
	{
		for (x = -(n - 1); x <= (n - 1); x++)
		{
			if (abs(x) + abs(y) < n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}