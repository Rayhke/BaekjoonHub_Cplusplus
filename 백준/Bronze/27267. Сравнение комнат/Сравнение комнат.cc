#include <iostream>
using namespace std;

int main() {
	int A, B, C, D; cin >> A >> B >> C >> D;
	A *= B; C *= D;
	if (A != C) {
		(A > C) ? cout << 'M' : cout << 'P';
	}
	else { cout << 'E'; }
	return 0;
}