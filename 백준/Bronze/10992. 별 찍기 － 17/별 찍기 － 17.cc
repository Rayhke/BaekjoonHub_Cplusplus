#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 1; n < N; n++) {
		for (int m = N; m > n; m--) { cout << ' '; }
		cout << '*';
		if (n != 1) {
			for (int m = 0; m < (n - 1) * 2 - 1; m++) { cout << ' '; }
			cout << '*';
		}
		cout << '\n';
	}
	for (int n = 0; n < N * 2 - 1; n++) { cout << '*'; }
	return 0;
}