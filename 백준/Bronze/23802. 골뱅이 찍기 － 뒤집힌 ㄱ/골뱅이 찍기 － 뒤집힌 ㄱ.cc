#include <iostream>
using namespace std;

int main() {
	int N; string S = ""; cin >> N;
	for (int n = 0; n < N; n++) { S += '@'; }
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < 5; m++) { cout << S; }
		cout << '\n';
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < 4; m++) {
			cout << S << '\n';
		}
	}
	return 0;
}