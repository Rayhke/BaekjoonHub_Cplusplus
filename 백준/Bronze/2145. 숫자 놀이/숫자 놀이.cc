#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M; string S;
	while (1) {
		cin >> N;
		if (N == 0) { break; }
		while (1) {
			S = to_string(N); M = 0;
			for (char C : S) { M += C - 48; }
			if (N == M) { cout << N << '\n'; break; }
			N = M;
		}
	}
	return 0;
}