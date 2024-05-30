#include <iostream>
using namespace std;

int main() {
	int X, L, R, Min = 1e9, Value, Result; cin >> X >> L >> R;
	for (int n = L; n <= R; n++) {
		Value = abs(X - n);
		if (Min > Value) {
			Min = Value; Result = n;
		}
	}
	cout << Result;
	return 0;
}