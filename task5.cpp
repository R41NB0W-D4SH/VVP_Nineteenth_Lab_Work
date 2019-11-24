#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int m;

	cout << "Введите размер матрицы (M * M): ";
	cin >> m;

	int **a = new int*[m];

	for (int i = 0; i < m; i++)
	{
		a[i] = new int[m];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Введите элементы " << i << " строки" << endl;
		for (int j = 0; j < m; j++)
		{
			cout << "Введите элемент: ";
			cin >> a[i][j];
		}
	}
	cout << "Теущая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	int *b = new int[m + m - 1];

	int i = m - 1, x = 0;
	for (int k = 0; k < m + m - 1; k++)
	{
		int z = i;
		b[k] = 0;
		if (i == 0)
		{
			for (int j = x; z < m && j < m; j++, z++)
			{
				b[k] += a[z][j];
			}
			x++;
		}
		else
		{
			for (int j = x; j <= z && z < m; j++, z++)
			{
				b[k] += a[z][j];
			}
			i--;
		}
	}

	cout << endl;

	for (int i = 0; i < m + m - 1; i++)
	{
		cout << b[i] << endl << endl;
	}

	system("pause");
	return 0;
}
