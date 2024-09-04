#include <iostream>

bool R[32];

int main() {
	int N; std::cin >> N;
	for (int n = 31; n > -1; n--) {
		if (N & (1 << n)) { R[n] = 1; }
	}
	for (int n = 0; n < 32; n++) {
		if (R[n]) { printf("%d ", n); }
	}
	return 0;
}