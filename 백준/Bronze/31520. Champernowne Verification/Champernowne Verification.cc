#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	bool R = 1; int N = 0, now = 0; string S, P; cin >> S;
	while (now < S.length()) {
		P = ""; ++N;
		for (int n = 0; n <= (int)log10(N); n++) {
			P += S[now++];
		}
		if (N != stoi(P)) { R = 0; break; }
	}
	cout << (R ? N : -1);
	return 0;
}