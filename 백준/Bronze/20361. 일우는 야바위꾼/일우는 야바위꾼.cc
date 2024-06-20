#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, X, K, A, B; cin >> N >> X >> K;
	while (K--) {
		cin >> A >> B;
		if (A == X) { X = B; }
		else if (B == X) { X = A; }
	}
	cout << X;
	return 0;
}