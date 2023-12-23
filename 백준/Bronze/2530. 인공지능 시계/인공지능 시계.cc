#include <iostream>
using namespace std;

int main() {
	int T, M, S, D; cin >> T >> M >> S >> D;
	S += D;
	M += S / 60; S %= 60;
	T += M / 60; M %= 60;
	T %= 24;
	cout << T << ' ' << M << ' ' << S;
	return 0;
}