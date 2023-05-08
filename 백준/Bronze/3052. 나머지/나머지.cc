#include <iostream>
using namespace std;

int main() {
	int a[42] = { 0 }, b, c = 0;
	for (int n = 0; n < 10; n++) {
		cin >> b; b = b % 42;
		if (b != 0) { if (a[b] != 0) { continue; } else { a[b] = b; } }
		else { if (a[0] != 0) { continue; } else { a[0] = 1; } }
	}
	for (int n = 0; n < 42; n++) {
		if (a[n] == 0) { continue; }
		else { c++; }
	}
	cout << c << endl;
	return 0;
}