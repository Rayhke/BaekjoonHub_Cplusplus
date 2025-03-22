#include <iostream>
using namespace std;

bool R[4];

int main() {
	string S, P = "UAPC"; cin >> S;
	for (char& C : S) {
		size_t t = P.find(C);
		if (t != string::npos) { R[t] = 1; }
	}
	for (int n = 0; n < 4; n++) {
		if (!R[n]) { cout << P[n]; }
	}
	return 0;
}