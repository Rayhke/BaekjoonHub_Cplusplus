#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a = 0; double N, K, X, Y, x, y; cin >> N >> K >> X >> Y;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		if (X > x) { x = X - x; } else { x = x - X; }
		if (Y > y) { y = Y - y; } else { y = y - Y; }
		if (sqrt((x * x) + (y * y)) > K) { a++; }
	}
	cout << a;
	return 0;
}