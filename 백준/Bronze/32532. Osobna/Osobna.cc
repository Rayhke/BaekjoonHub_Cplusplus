#include <iostream>
using namespace std;

string Ime, Prezime, Datum, OIB;

int main() {
	bool R = 0; int N = 0; char C; string S; cin >> S;
	OIB = S.substr(15, 11); cin >> S;
	for (int n = 0; n < 2; n++) {
		C = S[n];
		N *= 10; N += C - 48;
	}
	Datum += S.substr(4, 2) + '-';
	Datum += S.substr(2, 2) + '-';
	Datum += N < 25 ? "20" : "19";
	if (N < 10) {
		C = N + 48;
		Datum += '0'; Datum += C;
	}
	else {
		C = (N / 10) + 48; Datum += C;
		C = (N % 10) + 48; Datum += C;
	}
	cin >> S; N = 0;
	for (char& s : S) {
		if (s == '<') { N++; continue; }
		if (N > 1) { Prezime += s; }
		else { Ime += s; }
	}
	cout << "Ime: " << Ime[0];
	for (int n = 1; n < Ime.length(); n++) {
		C = Ime[n] + 32;
		cout << C;
	}
	cout << "\nPrezime: " << Prezime[0];
	for (int n = 1; n < Prezime.length(); n++) {
		C = Prezime[n] + 32;
		cout << C;
	}
	cout << "\nDatum rodjenja: " << Datum << "\nOIB: " << OIB;
	return 0;
}