#include <iostream>
using namespace std;

int main() {
	int N; string S = "", P = ""; cin >> N;
	for (int n = 0; n < N; n++) {
		S += '@'; P += ' ';
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < 3; m++) { cout << S; }
		cout << P << S << '\n';
	}
	for (int n = 0; n < 3; n++) {
		for (int m = 0; m < N; m++) {
			for (int l = 0; l < 5; l++) {
				cout << (l & 1 ? P : S);
			}
			cout << '\n';
		}
	}
	for (int n = 0; n < N; n++) {
		cout << S << P;
		for (int m = 0; m < 3; m++) { cout << S; }
		cout << '\n';
	}
	return 0;
}