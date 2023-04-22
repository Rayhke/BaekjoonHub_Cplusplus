#include <iostream>
using namespace std;

int main() {
	int a, b[100], c, d = 0;
	cin >> a;
	for (int n = 0; n < a; n++) { cin >> b[n]; }
	cin >> c;
	for (int n = 0; n < a; n++) {
		if (b[n] == c) { d++; }
	}
	cout << d;
	return 0;
}