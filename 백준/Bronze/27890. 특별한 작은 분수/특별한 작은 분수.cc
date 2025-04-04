#include <iostream>
using namespace std;

int main() {
	int X, N; cin >> X >> N;
	for (int n = 0; n < N; n++) {
		X = X & 1 ? X * 2 : X / 2;
		X ^= 6;
	}
	cout << X;
	return 0;
}