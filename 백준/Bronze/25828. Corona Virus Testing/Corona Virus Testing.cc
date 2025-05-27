#include <iostream>
using namespace std;

int main() {
	int G, P, T, Result1, Result2; cin >> G >> P >> T;
	Result1 = G * P; Result2 = T * P + G;
	if (Result1 != Result2) {
		cout << (Result1 > Result2) + 1;
	}
	else { cout << 0; }
	return 0;
}