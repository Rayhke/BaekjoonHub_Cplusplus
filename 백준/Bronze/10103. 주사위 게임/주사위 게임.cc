#include <iostream>
using namespace std;

int main() {
	int a, b, c, p1 = 100, p2 = 100;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> c;
		if (b == c) { continue; }
		else if (b > c) { p2 = p2 - b; }
		else { p1 = p1 - c; }
	}
	cout << p1 << "\n" << p2;
	return 0;
}