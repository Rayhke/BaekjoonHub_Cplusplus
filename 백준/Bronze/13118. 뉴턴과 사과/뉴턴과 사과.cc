#include <iostream>

int main() {
	int X, Y, R, Point[4], Result = 0;
	for (int& p : Point) { std::cin >> p; }
	std::cin >> X >> Y >> R;
	for (int n = 0; n < 4; n++) {
		if (X == Point[n]) { Result = ++n; break; }
	}
	std::cout << Result;
	return 0;
}