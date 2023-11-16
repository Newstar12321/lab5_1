/*
1.	Дан массив А размера N.
Найти минимальный элемент из его элементов
с четными номерами: A2, A4, A6, …
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	const int MAX = 10;
	int array[MAX];
	int n, min;
	cout << "Введите число элементов массива" << endl << "n = ";
	cin >> n;
	if ((n < 1) || (n > MAX))
	{
		cerr << "Ошибка: размер массива не может быть меньше 1 и не должен превышать 10";
		return 1;
	}
	cout << "Введите элементы массива:" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << i << ") ";
		cin >> array[i];
	}

	min = array[0];
	for (size_t i = 2; i < n; i += 2)
	{
		int mini = array[i];
		if (mini < min) {
			min = mini;
		}
	}
	cout << "Минимальный элемент из элементов с четными индексами: " << min;
}