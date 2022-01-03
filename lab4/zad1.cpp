#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

int n;

int main() {
	srand(time(NULL));
	cout << "Podaj n";
	cin >> n;
	int *v1 = new int[n];
	int *v2 = new int[n];
	for (int i = 0; i < n; i++){
		v1[i] = 0;
		v1[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v1[i] << " ";
	}
	cout << "]" << endl;
	for (int i = 0; i < n; i++){
		v2[i] = 0;
		v2[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v2[i] << " ";
	}
	cout << "]" << endl;
	int suma = 0;
	for (int i = 0; i < n; i++){
		suma += v1[i] * v2[i];
	}
	cout << "Iloczyn skalarny " << suma;
	delete[]v1;
	delete[]v2;

}