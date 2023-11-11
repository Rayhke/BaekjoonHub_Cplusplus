#include <iostream>
using namespace std;

int main() {
	short N; string S, P; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> S;
		for (char m : S) { if (m == 'S') { P = S; } }
	}
	cout << P;
	return 0;
}