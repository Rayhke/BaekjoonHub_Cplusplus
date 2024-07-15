#include <iostream>

int main() {
	int N, Input, Count = 0; std::cin >> N;
	for (int t = 0; t < 3; t++) {
		for (int n = 0; n < N; n++) {
			std::cin >> Input;
			if (Input == 7) { Count++; }
		}
	}
	std::cout << ((Count > 2) ? 777 : 0);
	return 0;
}