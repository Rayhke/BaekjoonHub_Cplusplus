#include <iostream>
using namespace std;

int main() {
	int X, Y, Z; cin >> X >> Y >> Z;
	X = X * 60 + Y * 60; Z = Z * 60 + 30;
	cout << (X <= Z);
	return 0;
}