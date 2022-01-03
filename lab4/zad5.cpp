#include<iostream>

using namespace std;

int main() {
	int n, m;
	cout << "Podaj m liczba wierszy macierzy" << endl;
	cin >> m;
	cout << "Podaj n liczba kolumn macierzy" << endl;
	cin >> n;
	int **A = new int*[m];
	int **B = new int*[m];
	int **C = new int*[m];
	int **D = new int*[m];
	for (int i = 0; i < m; i++) {
		A[i] = new int[n];
		B[i] = new int[n];
		C[i] = new int[n];
		D[i] = new int[n];
		for (int j = 0; j < n; j++){
			A[i][j] = rand() % 12 - 16;
			B[i][j] = rand() % 12 - 16;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "B" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
			D[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "D" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[]A[i];
		delete[]B[i];
		delete[]C[i];
		delete[]D[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
	delete[]D;
}