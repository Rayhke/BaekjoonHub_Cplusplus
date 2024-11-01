#include <iostream>

int main() {
	int A, W, V; std::cin >> A >> W >> V;
	std::cout << ((A > W / V) ? 0 : 1);
	return 0;
}