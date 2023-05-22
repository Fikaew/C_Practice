#include<stdio.h>
int main()
{
	int x ,i = 2;
	printf("Enter Number :");
	scanf_s("%d", &x);
	printf("%d = ", x);
	if (x == 1)
	{
		printf("1");
	}
	while (x > 1)
	{
		if (x % i == 0)
		{
			x /= i;
			printf("%d ", i);
			if (x > 1)
			{
				printf("x ");
			}
		}
		else
		{
			i++;
		}
	}
	return 0;
}
