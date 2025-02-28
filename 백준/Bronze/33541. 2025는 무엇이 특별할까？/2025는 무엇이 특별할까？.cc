#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int X, A, B, Result = -1; cin >> X; X++;
	for (int n = X; n < 10000; n++) {
		A = (n / 1000) * 10 + ((n % 1000) / 100);
		B = n % 100;
		if (pow(A + B, 2) == n) { Result = n; break; }
	}
	cout << Result;
	return 0;
}