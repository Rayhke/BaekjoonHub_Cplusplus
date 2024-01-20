#include <iostream>
using namespace std;

int main() {
	long long N, M;
	while (1) {
		cin >> N; M = 0;
		if (N == 0) { break; }
		while (N) { M += N--; }
		cout << M << '\n';
	}
	return 0;
}