#include <iostream>
using namespace std;

int TM, BM = 5000;

int main() {
	int N, T, B; cin >> N;
	while (N--) {
		cin >> T >> B;
		TM = max(T, TM);
		BM = min(B, BM);
	}
	cout << (TM * BM) % 7 + 1;
	return 0;
}