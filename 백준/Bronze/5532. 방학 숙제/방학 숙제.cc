#include <iostream>
using namespace std;

int main() {
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	for (int n = 0; n < L; n++) {
		A -= C; B -= D;
		if (A <= 0 && B <= 0) { L -= n + 1; break; }
	}
	cout << L;
	return 0;
}