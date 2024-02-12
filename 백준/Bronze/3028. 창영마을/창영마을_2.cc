#include <iostream>
using namespace std;

int main() {
	bool B[3] = { 1,0,0 }; int n = 0, m = 0; string S; cin >> S;
	for (char& C : S) {
		if (C == 65) { n = 0; m = 1; }
		else if (C == 66) { n = 1; m = 2; }
		else if (C == 67) { n = 0; m = 2; }
		if (B[n] || B[m]) { swap(B[n], B[m]); }
	}
	for (int n = 0; n < 3; n++) {
		if (B[n]) { cout << n + 1; break; }
	}
	return 0;
}
