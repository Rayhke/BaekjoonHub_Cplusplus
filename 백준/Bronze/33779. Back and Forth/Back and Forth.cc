#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	bool R = 1; int N; string S;
	cin >> S; N = S.length();
	for (int n = 0; n < N / 2; n++) {
		if (S[n] != S[N - n - 1]) {
			R = 0; break;
		}
	}
	cout << (R ? "beep" : "boop");
	return 0;
}