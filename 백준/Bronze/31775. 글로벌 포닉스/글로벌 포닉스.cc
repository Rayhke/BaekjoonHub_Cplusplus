#include <iostream>

bool Check[6];

int main() {
	char S[21]; int Count = 0, Value;
	for (int n = 0; n < 3; n++) {
		std::cin >> S; Value = S[0] - 'k';
		if (Value == 0 || Value == 1 || Value == 5) {
			Count += (!Check[Value]) ? 1 : 0;
			Check[Value] = 1;
		}
	}
	std::cout << ((Count > 2) ? "GLOBAL" : "PONIX");
	return 0;
}