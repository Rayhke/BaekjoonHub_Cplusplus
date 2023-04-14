#include <iostream>
using namespace std;

int main() {
	int T, N, a, s[12] = { 0 };
	cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> N;
		while (N--) {
			cin >> a;
			s[n] += a;
		}
	}
	for (int m = 0; m < T; m++) {
		cout << s[m];
		if (m != (T - 1)) cout << "\n";
	}
	return 0;
}