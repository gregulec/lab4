#include<iostream>

using namespace std;

int main() {
	float suma, srednia, maximum, minimum;
	int n, operacja;
	cout << "Podaj liczbe elementow" << endl;
	cin >> n;
	float *tab = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " liczbe" << endl;
		cin >> tab[i];
	}
	cout << "Co chcesz zrobic? Wybierz 1 - suma, 2 - srednia, 3 - max, 4 - min" << endl;
	cin >> operacja;
	switch (operacja){
	case 1: suma = 0;
		for (int i = 0; i < n; i++) {
			suma += tab[i];
		}
		cout << suma;
		break;

	case 2: srednia = 0;
		suma = 0;
		for (int i = 0; i < n; i++) {
			suma += tab[i];
			srednia = suma / n;
		}
		cout << srednia;
		break;

	case 3: maximum = 0;
		for (int i = 0; i < n; i++) {
			if (tab[i] > tab[i + 1]) maximum = tab[i];
		}
		cout << maximum;
		break;

	case 4: minimum = 0;
		for (int i = 0; i < n; i++) {
			if (tab[i] < tab[i + 1]) minimum = tab[i];
		}
		cout << minimum;
		break;
	default:
		break;
	}
	delete[]tab;
}