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

	int min = 0, max = 0, min_c = 0, max_c = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < a[min][min_c])
			{
				min = i;
				min_c = j;
			}
			else if (a[i][j] > a[max][max_c])
			{
				max = i;
				max_c = j;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		int temp = a[i][min_c];
		a[i][min_c] = a[i][max_c];
		a[i][max_c] = temp;
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
