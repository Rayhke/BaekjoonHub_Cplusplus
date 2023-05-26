#include <iostream>
using namespace std;

int main() {
	int a, b = 0;
	char c[21] = "";
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> c;
		while (b < 21) {
			if (c[b] == '\0') { break; }
			b++;
		}
		if (5 < b && b < 10) { cout << "yes\n"; }
		else { cout << "no\n"; }
		b = 0; c[0] = '\0';
	}
	return 0;
}