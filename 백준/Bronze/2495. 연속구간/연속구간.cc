#include <iostream>
using namespace std;

int main() {
	char C; int N, P; string S;
	for (int n = 0; n < 3; n++) {
		cin >> S; C = 'A'; N = 1; P = 0;
		for (const auto& n : S) {
			if (C != n) { N = max(P, N); C = n; P = 1; }
			else { P++; }
		}
        N = max(P, N);
		cout << N << '\n';
	}
	return 0;
}