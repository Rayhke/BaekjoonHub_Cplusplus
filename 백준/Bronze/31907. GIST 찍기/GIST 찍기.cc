#include <iostream>
using namespace std;

int main() {
	int K; cin >> K;
	for (int k = 0; k < K; k++) {
		for (int n = 0; n < K; n++) { cout << 'G'; }
		for (int n = 0; n < K * 3; n++) { cout << '.'; }
		cout << '\n';
	}
	for (int k = 0; k < K; k++) {
		for (int n = 0; n < K; n++) { cout << '.'; }
		for (int n = 0; n < K; n++) { cout << 'I'; }
		for (int n = 0; n < K; n++) { cout << '.'; }
		for (int n = 0; n < K; n++) { cout << 'T'; }
		cout << '\n';
	}
	for (int k = 0; k < K; k++) {
		for (int n = 0; n < K * 2; n++) { cout << '.'; }
		for (int n = 0; n < K; n++) { cout << 'S'; }
		for (int n = 0; n < K; n++) { cout << '.'; }
		cout << '\n';
	}
	return 0;
}