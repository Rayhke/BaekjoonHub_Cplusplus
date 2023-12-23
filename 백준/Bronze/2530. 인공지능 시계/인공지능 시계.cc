#include <iostream>
using namespace std;

int main() {
	int T, M, S, TD, MD, SD; cin >> T >> M >> S >> SD;
	MD = SD / 60; SD %= 60;
	TD = MD / 60; MD %= 60;
	S += SD; M += MD; T += TD;
	M += S / 60; S %= 60;
	T += M / 60; M %= 60;
	T %= 24;
	cout << T << ' ' << M << ' ' << S;
	return 0;
}