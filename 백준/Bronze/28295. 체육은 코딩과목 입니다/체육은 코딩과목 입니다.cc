#include <iostream>
using namespace std;

int main() {
	int N, M = 0;
	for (int n = 0; n < 10; n++) {
		cin >> N;
		if (N == 1) { M += 90; }
		if (N == 2) { M += 180; }
		if (N == 3) { M += 270; }
	}
	M %= 360;
	if (M == 0) { cout << 'N'; }
	if (M == 90) { cout << 'E'; }
	if (M == 180) { cout << 'S'; }
	if (M == 270) { cout << 'W'; }
	return 0;
}