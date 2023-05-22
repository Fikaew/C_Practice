#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char a[100];
	scanf_s("%s", a, sizeof a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 32;
			
		}
	}
	printf("%s", a);
}
