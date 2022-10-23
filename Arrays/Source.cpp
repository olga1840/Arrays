#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE];
	//arr[3] = 123; //обращаемся к элементу массива на запись
	//cout << arr[3] << endl; //обращаемся к элементу массива на чтение

	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}


	//Вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вычисление суммы элементов массива
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Сумма среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;

    //Поиск минимального и максимального значения в массиве
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}