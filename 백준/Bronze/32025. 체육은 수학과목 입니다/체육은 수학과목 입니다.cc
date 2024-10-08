#include <iostream>

int main() {
	int H, W; std::cin >> H >> W;
	std::cout << std::min(H, W) * 50;
	return 0;
}