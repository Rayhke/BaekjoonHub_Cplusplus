#include <iostream>
using namespace std;

int main() {
	bool R; int T, D, C, Arr[10]; cin >> T;
	while (T--) {
		cin >> D; C = 0; R = 0;
		for (int d = 0; d < D; d++) { cin >> Arr[d]; }
		for (int d = 0; d < D; d++) {
			if (C * 2 > Arr[d]) { R = 1; }
			C = Arr[d];
		}
		cout << "Denominations: ";
		for (int d = 0; d < D; d++) { cout << Arr[d] << ' '; }
		if (R) { cout << "\nBad "; }
		else { cout << "\nGood "; }
		cout << "coin denominations!\n\n";
	}
	return 0;
}