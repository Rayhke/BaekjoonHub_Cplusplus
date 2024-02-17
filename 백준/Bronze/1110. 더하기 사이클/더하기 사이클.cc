#include <iostream>
using namespace std;

int main() {
	int N, P; cin >> N; P = N;
	for (int n = 1; ; n++) {
		N = ((N % 10) * 10) + (((N / 10) + (N % 10)) % 10);
		if (N == P) { cout << n; break; }
	}
	return 0;
}