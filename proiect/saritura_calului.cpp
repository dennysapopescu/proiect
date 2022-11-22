#include<iostream>
using namespace std;

int matr[100][100], n;
int linie_init = 0, coloana_init = 0;

//directiile in care se deplaseaza calul pe tabla de sah
int dl[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dc[] = { 1, 2, 2, 1, -1, -2, -2, -1 };