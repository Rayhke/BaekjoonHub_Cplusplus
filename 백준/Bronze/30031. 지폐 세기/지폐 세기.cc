#include <iostream>
using namespace std;

int main() {
	int N, W, H, M = 0; cin >> N;
	while (N--) {
		cin >> W >> H; W -= 136;
		if (W == 0) { M += 1000; }
		else if (W == 6) { M += 5000; }
		else if (W == 12) { M += 10000; }
		else if (W == 18) { M += 50000; }
	}
	cout << M;
	return 0;
}