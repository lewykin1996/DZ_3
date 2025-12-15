// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите оператор (|| или &&):";
	string a;
	cin >> a;

	bool values[4][2] = {
		{true, false},
		{false, true},
		{true, false},
		{false, false}
	};
	
	cout << "Оператор:" << a << endl;

	for (int i = 0; i < 4; i++)
	{
		bool A = values[i][0];
		bool B = values[i][1];

		bool result;

		if (a == "||")
			result = A || B;
		else if (a == "&&")
		{
			result = A && B;
		}
		else 
		{
			cout << "Ошибка!" << endl;
			return 0;
		}
		
		cout << (A ? "true" : "false") << "\t"
			<< (B ? "true" : "false") << "\t"
			<< (result ? "true" : "false") << endl;
	}
	return 0;
}


