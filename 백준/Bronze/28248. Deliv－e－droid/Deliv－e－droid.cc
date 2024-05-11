#include <iostream>
using namespace std;

int main() {
	int P, C, F; cin >> P >> C;
	F = P * 50 - C * 10;
	if (P > C) { F += 500; }
	cout << F;
	return 0;
}