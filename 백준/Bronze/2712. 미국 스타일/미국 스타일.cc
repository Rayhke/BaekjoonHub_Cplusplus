#include <iostream>
using namespace std;

int main() {
	int T; double N; string S; cin >> T;
	cout << fixed;
	cout.precision(4);
	while (T--) {
		cin >> N >> S;
		if (S == "kg") {
			cout << N * 2.2046 << " lb\n";
		}
		else if (S == "lb") {
			cout << N * 0.4536 << " kg\n";
		}
		else if (S == "l") {
			cout << N * 0.2642 << " g\n";
		}
		else {
			cout << N * 3.7854 << " l\n";
		}
	}
	return 0;
}