//Numerics
#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DEC_2_BIN
	const int n = 32;
	bool bin[n] = {};   //���� ������ ����� ������� ������� ��������� �����
	int decimal;        //���������� �����, ��������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	cout << decimal << endl;
	int i = 0; // ����� �������
	for (; decimal; i++, decimal /= 2)
	{
		bin[i] = decimal % 2;  //�������� ������� ������ ��������� �����
		
	}
	//������� ������� �� ������� � �������� �������:
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif //DEC_2_BIN
}