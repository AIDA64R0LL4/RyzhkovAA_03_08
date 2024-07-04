// RyzhkovAA_03_08.cpp
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

using namespace std;

class Cars
{
private:
	
	double price;
	int countcarsinpark;
	int numbercars;
	string wordcars;
	int numerreic;
	string wordreic;

public:

	Cars()
	{
		price = 0;
		countcarsinpark = 0;
		numbercars = 0;
		wordcars = "";
		numerreic = 0;
		wordreic = "";
	}

	void input()
	{
		cout << "Введите стоимость проезда ";
		cin >> price;
		cout << "Введите количество единиц в парке ";
		cin >> countcarsinpark;
		cout << "Введите номер транспорта ";
		cin >> numbercars >> wordcars;
		cout << "Введите номер рейса ";
		cin >> numerreic >> wordreic;
	}

	void stingfile()
	{
		ofstream file("Cars.txt", ios::app);
		{
			if (file.is_open())
			{
				file << "Стоимость проезда " << price << " рублей " << endl;
				file << "Количество единиц в парке " << countcarsinpark << endl;
				file << "Номер транспорта " << numbercars << wordcars << endl;
				file << "Номер рейса " << numbercars << wordreic << endl;
				file << "===========================" << endl;
				file.close();
			}
		}
	}

	void readfile()
	{
		ifstream file("Cars.txt");
		if (file.is_open())
		{
			string line;
			while (getline(file,line))
			{
				cout << line << endl;
			}
		}
	}


};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Cars cars;
	cars.input();
	cars.stingfile();
	cars.readfile();
}

