#include <iostream>
using namespace std;

int main() {
	bool R = 0; int N = 0; string S; cin >> S;
	for (char C : S) {
		if (C == 55) { R = 1; }
		N *= 10; N += C - 48;
	}
	N = (N % 7) ? 0 : 1; N += (R) ? 2 : 0;
	cout << N;
	return 0;
}