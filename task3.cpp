#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, m;

	cout << "M и N - четные числа." << endl;
	cout << "Введите размер матрицы (M * N): ";

	cin >> m >> n;

	if (m % 2 == 0 && n % 2 == 0)
	{ 
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

		for (int i = 0, x = m / 2; i < m / 2 && x < m; i++, x++)
		{
			for (int j = 0, y = m / 2; j <= n / 2 && y < m; j++, y++)
			{
				int temp = a[i][j];
				a[i][j] = a[x][y];
				a[x][y] = temp;
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
	}
	else
	{
		cout << "Вы ввели нечетные M и N. Попробуйте еще раз, следуя условию." << endl;
	}

	system("pause");
	return 0;
}
