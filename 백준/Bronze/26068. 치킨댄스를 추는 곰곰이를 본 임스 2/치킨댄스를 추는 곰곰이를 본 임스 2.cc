#include <iostream>
using namespace std;

int main() {
	int N, D, P = 0; string S; cin >> N;
	while (N--) {
		cin >> S; D = 0;
		for (int n = 2; n < S.length(); n++) {
			D *= 10; D += S[n] - 48;
		}
		if (D < 91) { P++; }
	}
	cout << P;
	return 0;
}