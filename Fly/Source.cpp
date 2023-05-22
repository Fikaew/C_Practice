#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h;
	scanf_s("%d", &h);
	for (a = 1; a <= h-1; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("* ");
		}
		for (c = 2 * h - 3; c >= 2 * a - 1; c -= 1)
		{
			printf("  ");
		}
		for (d = 1; d <= a; d++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (a = 1; a <= 2 * h - 1; a++)
	{
		printf("* ");
	}
	printf("\n");
	for (a = 1; a <= h - 1; a++)
	{
		for (b = h - 1; b >= a; b--)
		{
			printf("* ");
		}
		for (c = 1; c <= 2 * a - 1;c += 1)
		{
			printf("  ");
		}
		for (d = h - 1; d >= a; d--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}