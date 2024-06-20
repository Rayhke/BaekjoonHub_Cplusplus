#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int N, X, K, A, B; cin >> N >> X >> K;
	while (K--) {
		cin >> A >> B;
		if (A == X) { X = B; }
		else if (B == X) { X = A; }
	}
	cout << X;
	return 0;
}