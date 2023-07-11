#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int a = 0; double N, K, X, Y, x, y; cin >> N >> K >> X >> Y;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		if (sqrt(pow((double)max(X, x) - min(X, x), 2) + pow((double)max(Y, y) - min(Y, y), 2)) > K) { a++; }
	}
	cout << a;
	return 0;
}
