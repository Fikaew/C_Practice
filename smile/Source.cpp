#include<iostream>
void showMat(int mat[3][3]);
int main()
{
	int mat[3][3];
	for (int i = 0; i <= 2; i++)
	{
		printf("insert Row#%d\n",i+1);
		for (int j = 0; j <= 2; j++)
		{
			scanf_s("%d", &mat[i][j]);
		}
	}
	showMat(mat);
	return 0;
}

void showMat(int mat[3][3])
{
	printf("Matrix : \n");
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("%5d", mat[i][j]);
		}
		printf("\n");
	}
}