#include <iostream>
using namespace std;

int main() {
	bool B[3] = { 1,0,0 }; string S; cin >> S;
	for (char& C : S) {
		if (C == 65) { swap(B[0], B[1]); }
		else if (C == 66) { swap(B[1], B[2]); }
		else if (C == 67) { swap(B[0], B[2]); }
	}
	for (int n = 0; n < 3; n++) {
		if (B[n]) { cout << n + 1; break; }
	}
	return 0;
}