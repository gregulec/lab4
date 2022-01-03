#include<iostream>
#include<string>

using namespace std;

int n, operacja;
string napis;
int main() {
	do {
		cout << "Prosze podac napis do 30 znakow=";
		cin >> napis;
	} while (napis.length() > 30);
	cout << "Co chcesz zrobic? Wybierz 1 - zamienic wszystkie litery na duze, 2 - zamienic wszystkie litery na male, 3 - zamieniic duze litery na male i male na duze" << endl;
	cin >> operacja;
	switch (operacja){
	case 1: for (int i = 0; i < 30; i++){
				napis[i] = toupper(napis[i]);
				cout << napis[i];
	}
			break;
	case 2: for (int i = 0; i < 30; i++){
				napis[i] = tolower(napis[i]);
				cout << napis[i];
	}
			break;
	case 3: for (int i = 0; i < 30; i++){
				if (islower(napis[i])) napis[i] = toupper(napis[i]);
				else if (isupper(napis[i])) napis[i] = tolower(napis[i]);
				cout << napis[i];
	}
			break;
	default:
		break;
	}
}