
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void q() {
	double* w = 0;
	char e = 0;
	do {

		int s = 0;
		cout << "Размер массива: ";
		cin >> s;
		w = new double[s];
		for (int i = 0; i < s; i++)
		{
			w[i] = (i + 1) * 0.1;
		}

		for (int i = 0; i < s; i++)
		{
			cout << w[i] << "  ";
		}
		cout << endl;
		delete[] w;
		w = 0;

		cout << "\nПродолжить (1). Выйти (0): ";
		cin >> e;
	} while (e != '0');
}
void w() {
	int q = 12;
	int* w = new int[q];

	for (int i = 0; i < q; i++)
	{
		w[i] = i * 1
			;
	}
	for (int i = 0; i < q; i++)
	{
		cout << w[i] << "  ";
	}
	cout << endl << endl;
	int e = 0;
	for (int i = 0; i < q; i++)
	{
		if (i % 2 == 0)
		{
			e = w[i];
			w[i] = w[i + 1];
			w[i + 1] = e;
		}
	}
	for (int i = 0; i < q; i++)
	{
		cout << w[i] << "  ";
	}
	cout << endl << endl;

	delete[] w;
}
void e()
{

	int q = 0;
	int w = 0;

	cout << "Введите размерность двумерного массива!\n";
	cout << "Строк: ";
	cin >> q;
	cout << "Столбцов: ";
	cin >> w;

	//создавая двумерный динамический массив используем указатель на указатель
	int** e = new int*[q];
	for (int i = 0; i < q; i++)
	{
		e[i] = new int[w];
	}

	srand(time(0));
	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < w; j++)
		{
			e[i][j] = 10 + rand() % 41;
		}
	}
	cout << endl << endl;
	for (int i = 0; i < q; i++)
	{
		cout << " |  ";
		for (int j = 0; j < w; j++)
		{
			cout << e[i][j] << "  ";
		}
		cout << "|" << endl;
	}

	//Очистка памяти динамического двумерного массива
	for (int i = 0; i < q; i++)
	{
		delete[] e[i];
	}
	delete[] e;

}




int main()
{
	int r;
	setlocale(LC_ALL, "rus");
	cin >> r;
	if (r == 1) q();
	if (r == 2) w();
	if (r == 3) e();
	return 1;

}