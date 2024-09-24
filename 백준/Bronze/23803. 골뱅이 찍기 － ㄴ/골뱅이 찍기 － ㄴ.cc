#include <iostream>
using namespace std;

int main() {
	int N; string S = ""; cin >> N;
	for (int n = 0; n < N; n++) { S += '@'; }
	for (int n = 0; n < N * 4; n++) {
		cout << S << '\n';
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) { cout << "@@@@@"; }
		cout << '\n';
	}
	return 0;
}