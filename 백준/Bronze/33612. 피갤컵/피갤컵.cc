#include <iostream>
using namespace std;

int main() {
	int N, Y = 2024, M = 1; cin >> N;
	while (N--) { M += 7; }
	while (1) {
		if (M < 13) { break; }
		Y++; M -= 12;
	}
	cout << Y << ' ' << M;
	return 0;
}