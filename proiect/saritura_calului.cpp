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

bool ok(int i, int j)
{
	if (i < 0 || i > n - 1)
		return false;
	if (j < 0 || j > n - 1)
		return false;
	if (matr[i][j])
		return false;
	return true;
}

void afisare()
{
	int i, j;
	int nr_sol = 1;
	cout << "solutia cu numarul " << nr_sol << "\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << matr[i][j] << "\t";
		cout << endl;
	}
	nr_sol++;
	cout << "\n\n\n";
}

void back(int l, int c)
{
	int i, vi, vj; //vecin i, vecin j
	int k = 2;
	if (plin())
	{
		afisare();
		return;
	}
	for (i = 0; i < 8; i++)
	{
		vi = l + dl[i];
		vj = c + dc[i];
		if (ok(vi, vj))
		{
			matr[vi][vj] = k++;
			back(vi, vj);
			matr[vi][vj] = 0;
			k--;
		}

	}
}