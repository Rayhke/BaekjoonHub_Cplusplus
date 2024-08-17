#include <iostream>

int main() {
	int N; long long Count = 0; std::cin >> N;
	for (int n = 0; n < N - 1; n++) {
		for (int m = n + 1; m < N; m++) { Count++; }
	}
	std::cout << Count << '\n' << 2;
	return 0;
}