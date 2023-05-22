#include<stdio.h>

int main()
{
	int number = 1, maxBelow, sum = 0;
	scanf_s("%d", &maxBelow);
	while (number < maxBelow)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			printf("%d ", number);
			sum += number;
		}
		number++;
	}
	printf("\n%d", sum);
	return 0;
}