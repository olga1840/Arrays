#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int num_1; int num_2;
	cout << "������� ����������� ����� ��������� ��� ������ �����: "; cin >> num_1;
	cout << "������� ������������ ����� ��������� ��� ������ �����: "; cin >> num_2;

	const int n = 10;
	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (num_2-num_1+1)+num_1;
	}

	for (int i = 0; i < n; i++)

	{
		cout << arr[i] << "\t";
	}
	
	cout << endl;
}