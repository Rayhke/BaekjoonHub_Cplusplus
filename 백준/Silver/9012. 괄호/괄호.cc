#include <iostream>
using namespace std;

int main() {
	int a, b = 0; cin >> a;
	int* c = new int[a] {}; string s;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s[0] == 41) { continue; }
		else {
			for (int m = 0; s[m] != '\0'; m++) {
				if (s[m] == 40) { b = b + 1; }
				else { b = b - 1; }
				if (b < 0) { break; }
			}
			if (b == 0) { c[n] = 1; }
			b = 0;
		}
	}
	for (int n = 0; n < a; n++) {
		if (c[n] != 0) { cout << "YES\n"; }
		else { cout << "NO\n"; }
	}
	delete[]c;
	return 0;
}