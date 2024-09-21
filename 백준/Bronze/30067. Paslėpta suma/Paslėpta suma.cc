#include <iostream>

int main() {
	int Arr[10], Sum, Answer;
	for (int n = 0; n < 10; n++) { std::cin >> Arr[n]; }
	for (int n = 0; n < 10; n++) {
		Answer = Arr[n]; Sum = 0;
		for (int m = 0; m < 10; m++) {
			if (n == m) { continue; }
			Sum += Arr[m];
		}
		if (Answer == Sum) { std::cout << Answer; break; }
	}
	return 0;
}