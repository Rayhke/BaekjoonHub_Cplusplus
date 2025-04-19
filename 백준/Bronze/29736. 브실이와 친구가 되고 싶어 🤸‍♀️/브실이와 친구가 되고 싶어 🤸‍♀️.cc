#include <iostream>
using namespace std;

int main() {
	int A, B, K, X, Sum = 0; cin >> A >> B >> K >> X;
	for (int n = A; n <= B; n++) {
		if (abs(K - n) <= X) { Sum++; }
	}
	if (Sum != 0) { cout << Sum; }
	else { cout << "IMPOSSIBLE"; }
	return 0;
}