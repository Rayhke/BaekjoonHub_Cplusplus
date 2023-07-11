#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a = 0; double N, K, X, Y, x, y; cin >> N >> K >> X >> Y;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		if ((((x - X) * (x - X)) + ((y - Y) * (y - Y))) > (K * K)) { a++; }
	}
	cout << a;
	return 0;
}
