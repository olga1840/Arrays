#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

    //Циклический сдвиг массива
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//number_of_shifts = n - number_of_shifts; //циклический сдвиг массива вправо
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	cout << endl;

	//system("CLS"); //CLS - Clear Screen
	 //Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Sleep(500);
}