//Numerics
#include<iostream>
using namespace std;

//#define DEC_2_BIN
//#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Russian");

	int decimal;        //десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << decimal << endl;

#ifdef DEC_2_BIN
	const int n = 32;
	bool bin[n] = {};   //этот массив будет хранить разряды двоичного числа
	
	int i = 0; // номер разряда
	for (; decimal; i++, decimal /= 2)
	{
		bin[i] = decimal % 2;  //получаем младший разряд двоичного числа
		
	}
	//выводим остатки от деления в обратном порядке:
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif //DEC_2_BIN


#ifdef DEC_2_HEX
	const int n = 32;
	int hex[n] = {}; // массив будет хранить разряды шестнадцатиричного числа
	int decimal;     // десятичное число
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << decimal << endl;
	int i = 0;
	//for (; decimal; i++, decimal /= 16)
	//{
	//	hex[i] = decimal % 16;
	//}
	while (decimal)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		cout << hex[i] << " ";
	}
	
#endif //DEC_2_HEX

	const int n = 8;
	char hex[n] = {};    //этот массив будет хранить цестнадцатиричное число
	int i = 0;
	for (; decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;
	}
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}*/

		//if (hex[i] < 10)cout << hex[i]; else cout << char(hex[i] + 55);
		//(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i] + 55);
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));

		hex[i] += hex[i] < 10 ? 48 : 55;
		cout << hex[i];
	}
	cout << endl;
}