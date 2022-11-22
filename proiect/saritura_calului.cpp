#include<iostream>
using namespace std;
int n;
int matr[100][100]; 
int linie_init = 0, coloana_init = 0;

//directiile in care se deplaseaza calul pe tabla de sah
const int dir = 8;
const int dl[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
const int dc[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void citire()
{
	cout << "numarul de linii si coloane: ";
	cin >> n;
	cout << "linia si coloana de la care porneste deplasarea: " << endl;
	cout << "linia: ";
	cin >> linie_init;
	cout << "coloana: ";
	cin >> coloana_init;
	//initializare matrice
	matr[linie_init][coloana_init] = 1;
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

void afisare()
{
	int i, j;
	static int nr_sol = 1;
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

void back(int l, int c)
{
	int i;
	static int k = 2;
	if (plin())
	{
		afisare();
		return;
	}
	else
	for (i = 0; i < dir; i++)
	{
		int vi = l + dl[i];
		int vj = c + dc[i];
		if (ok(vi, vj))
		{
			matr[vi][vj] = k++;
			back(vi, vj);
			matr[vi][vj] = 0;
			k--;
		}

	}
}

int main()
{
	citire();
	cout << endl;
	back(linie_init, coloana_init);
	return 0;
}