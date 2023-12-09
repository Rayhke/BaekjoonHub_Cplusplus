#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N; string S;
	cin >> S; N = S.size() - 1;
	for (int n = 0; n < S.size() / 2; n++) {
		if (S[n] != S[N - n]) { cout << "false"; R = 0; break; }
	}
	if (R) { cout << "true"; }
	return 0;
}