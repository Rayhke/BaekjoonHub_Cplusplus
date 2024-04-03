#include <iostream>
using namespace std;

int main() {
	int T, K, input, evenSum, oddSum; cin >> T;
	while (T--) {
		cin >> K; evenSum = 0; oddSum = 0;
		while (K--) {
			cin >> input;
			if (input & 1) { oddSum += input; }
			else { evenSum += input; }
		}
		if (evenSum != oddSum) {
			(evenSum > oddSum) ? cout << "EVEN\n" : cout << "ODD\n";
		}
		else { cout << "TIE\n"; }
	}
	return 0;
}