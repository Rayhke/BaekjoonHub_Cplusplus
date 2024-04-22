#include <iostream>
using namespace std;

int main() {
	int T, N; cin >> T;
	while (T--) {
		cin >> N;
		if (N == 1) { cout << '#'; }
		else {
			for (int n = 0; n < N; n++) { cout << '#'; }
			cout << '\n';
			for (int n = 0; n < N - 2; n++) {
				cout << '#';
				for (int m = 0; m < N - 2; m++) { cout << 'J'; }
				cout << "#\n";
			}
			for (int n = 0; n < N; n++) { cout << '#'; }
		}
		cout << "\n\n";
	}
	return 0;
}