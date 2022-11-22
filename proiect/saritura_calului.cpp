#include<iostream>
using namespace std;

int matr[100][100], n;
int linie_init = 0, coloana_init = 0;

//directiile in care se deplaseaza calul pe tabla de sah
int dl[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dc[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void citire()
{
	cout << "numarul de linii si coloane: ";
	cin >> n;
	cout << "linia si coloana de la care porneste deplasarea: ";
	cout << "linia: ";
	cin >> linie_init;
	cout << "coloana: ";
	cin >> coloana_init;
	//initializare matrice
	matr[linie_init][coloana_init] = 0;
}

bool plin()
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (matr[i][j] == 0)
				return false;
	return true;
}