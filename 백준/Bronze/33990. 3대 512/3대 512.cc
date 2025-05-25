#include <iostream>
using namespace std;

int main() {
	int N, Min = 100, Total = -1, A, B, C; cin >> N;
	while (N--) {
		cin >> A >> B >> C;
		A += B + C;
		if (A < 512) { continue; }
		B = abs(A - 512);
		if (Min > B) {
			Min = B; Total = A;
		}
	}
	cout << Total;
	return 0;
}