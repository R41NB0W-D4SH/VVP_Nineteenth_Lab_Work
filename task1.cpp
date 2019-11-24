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

	cout << "Текущая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	int min, max;

	for (int i = 0; i < m; i++)
	{
		min = 0; max = 1;
		for (int j = 2; j < n; j++)
		{
			min = a[i][min] > a[i][j] ? j : min;
			max = a[i][max] < a[i][j] ? j : max;
		}
		int temp = a[i][min];
		a[i][min] = a[i][max];
		a[i][max] = temp;
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
