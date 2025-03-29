#include <iostream>
using namespace std;

int main() {
	int A, X, B, Y, T; cin >> A >> X >> B >> Y >> T;
	cout << A + X * max(T - 30, 0) * 21 << ' ' << B + Y * max(T - 45, 0) * 21;
	return 0;
}