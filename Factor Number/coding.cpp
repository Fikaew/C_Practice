#include<stdio.h>

int main()
{
	int num ,n = 1 , count = 0;
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("Factor of %d is", num);
	}
	else
	{
		printf("Factors of %d is", num);
	}
	for (n; n <= num; n++)
	{
		if (num % n == 0)
		{
			printf(" %d", n);
			count++;
		}
	}
	if (count == 1)
	{
		printf("(%d number)",count);
	}
	else
	{
		printf("(%d numbers)",count);
	}
	return 0;
}