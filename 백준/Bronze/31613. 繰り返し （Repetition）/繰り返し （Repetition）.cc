#include <iostream>
using namespace std;

int main() {
	int X, N, R, Count = 0; cin >> X >> N;
	while (X < N) {
		Count++; R = X % 3;
		if (R != 0) { X *= (R + 1); }
		else { X++; }
	}
	cout << Count;
	return 0;
}