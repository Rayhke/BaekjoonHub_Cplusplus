#include <iostream>
using namespace std;

int main() {
	int N, A, B, P = 0; cin >> N >> A >> B;
	while (1) {
		if (N > 0) {
			if (A > 1) { N--; A -= 2; P++; }
			else if (B > 0) { N--; B--; P++; }
			else { break; }
		}
		else { break; }
	}
	cout << P;
	return 0;
}