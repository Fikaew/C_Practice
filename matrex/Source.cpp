#include<iostream>
using namespace std;
int main()
{
	int m, n, matrix1[100][100], matrix2[100][100], matrix3[100][100];
	cout << "Insert Column: ";
	cin >> m;
	cout << "Insert Row: ";
	cin >> n;
	cout << "Write down the members of Matrix#1:";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n;j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "Matrix#1 be like:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n;j++)
		{
			printf("%5d", matrix1[i][j]);
		}
		cout << "\n";
	}
	cout << "Write Down the members of Matrix#2:";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	cout << "Matrix#2 be liked:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", matrix2[i][j]);
		}
		cout << "\n";
	}
	cout << "The sum of Matrix is :\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%5d", matrix1[i][j] + matrix2[i][j]);
			}
			cout << "\n";
		}
	return 0;
}