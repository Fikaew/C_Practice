#include<stdio.h>
int main()
{
	int n, sequence = 1 ,result = 1;
	scanf_s("%d", &n);
	for (sequence; n >= sequence; sequence++)
	{
		result *= sequence ;
	}
	printf("%d", result);
	return 0;
}