#include <iostream>

int main() {
	int N, In, Count = 0; std::cin >> N;
	while (N--) {
		std::cin >> In;
		if (In & 1) { Count++; }
	}
	std::cout << Count;
	return 0;
}