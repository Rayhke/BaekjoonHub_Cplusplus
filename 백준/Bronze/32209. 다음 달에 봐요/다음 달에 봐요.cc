#include <iostream>
using namespace std;

int main() {
	bool R = 1; int Q, X, Y, Count = 0; cin >> Q;
	while (Q--) {
		cin >> X >> Y;
		Count += (X & 1) ? Y : -Y;
		if (Count < 0) { R = 0; }
	}
	cout << (R ? "See you next month" : "Adios");
	return 0;
}