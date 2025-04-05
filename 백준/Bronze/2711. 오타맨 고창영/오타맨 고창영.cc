#include <iostream>
using namespace std;

int main() {
	int T, N, Index; char S[81]; cin >> T;
	while (T--) {
		cin >> N >> S; Index = 0;
		for (char& C : S) {
			if (++Index == N) { continue; }
			if (C == '\0') { break; }
			cout << C;
		}
		cout << '\n';
	}
	return 0;
}