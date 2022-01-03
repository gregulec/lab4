#include<iostream>

using namespace std;

int main() {
	int n, m, p;
	cout << "Podaj rozmiar m macierzy" << endl;
	cin >> m;
	cout << "Podaj rozmiar n macierzy" << endl;
	cin >> n;
	cout << "Podaj rozmiar p macierzy" << endl;
	cin >> p;
	cout << endl;
	int **A = new int*[n];
	int **B = new int*[m];
	int **C = new int*[n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
		for (int k = 0; k < m; k++){
			A[i][k] = rand() % 13 + 1;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++){
			cout << A[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int k = 0; k < m; k++) {
		B[k] = new int[p];
		for (int j = 0; j < p; j++){
			B[k][j] = rand() % 13 + 1;
		}
	}

	cout << "B" << endl;
	for (int k = 0; k < m; k++) {
		for (int j = 0; j < p; j++){
			cout << B[k][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		C[i] = new int[p];
		for (int j = 0; j < p; j++){
			C[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j <p; j++){
			for (int k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[]A[i];
	}
	for (int i = 0; i < m; i++) {
		delete[]B[i];
	}
	for (int i = 0; i < n; i++) {
		delete[]C[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
}