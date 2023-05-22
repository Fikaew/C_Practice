#include<iostream>
using namespace std;
int main()
{
	int m, n, matrix1[100][100], x;
	cout << "Insert Column: ";
	cin >> m;
	cout << "Insert Row: ";
	cin >> n;
	cout << "Write down the members of Matrix:";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "Matrix be like:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", matrix1[i][j]);
		}
		cout << "\n";
	}
	cout << "Insert the multiplier:";
	cin >> x;
	cout << "The result of Matrix is :\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", matrix1[i][j] * x);
		}
		cout << "\n";
	}
	return 0;
}