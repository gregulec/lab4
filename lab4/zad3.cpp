#include<iostream>
#include<string>
using namespace std;

string napis;
int sprawdz = 0, j, i;
int main() {
	do {
		cout << "Prosze podac napis do 30 znakow=";
		cin >> napis;
	} while (napis.length() > 30);
	cout << "Wyraz od konca=";
	for (int i = napis.length(); i >= 0; i--) {
		cout << napis[i];
	}
	cout << endl;
	j = napis.length() - 1;
	i = 0;
	while (i <= j) {
		if (napis[i] != napis[j]) sprawdz = 1;
		j--;
		i++;
	}
	if (sprawdz == 1) cout << " Wyraz nie jest palindromem";
	else cout << "Wyraz jest palindromem";
}