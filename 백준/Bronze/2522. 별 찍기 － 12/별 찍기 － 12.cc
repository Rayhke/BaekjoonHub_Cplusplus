#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = n + 1; m < N; m++) { cout << ' '; }
		for (int m = 0; m <= n; m++) { cout << '*'; }
		cout << '\n';
	}
	for (int n = 0; n < N - 1; n++) {
		for (int m = 0; m <= n; m++) { cout << ' '; }
		for (int m = n + 1; m < N; m++) { cout << '*'; }
		cout << '\n';
	}
	return 0;
}