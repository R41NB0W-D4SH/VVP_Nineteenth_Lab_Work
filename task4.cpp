#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, m;

	cout << "Введите размер матрицы (M * N): ";
	cin >> m >> n;

	int **a = new int*[m];

	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Введите элементы " << i << " строки" << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "Введите элемент: ";
			cin >> a[i][j];
		}
	}

	cout << "Теущая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j][0] > a[j + 1][0])
			{
				for (int k = 0; k < n; k++)
				{
					int temp = a[j][k];
					a[j][k] = a[j + 1][k];
					a[j + 1][k] = temp;
				}
			}
		}
	}

	cout << "Новая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
