#include <iostream>
using namespace std;

int main() {
	int p = 0; string s, w = ""; cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		if (s[n] == 'X') { p++; }
		else if (s[n] == '.') {
			for (int n = 0; n < (p / 4); n++) { w += "AAAA"; }
			p %= 4;
			for (int n = 0; n < (p / 2); n++) { w += "BB"; }
			p = 0;
			w += ".";
		}
	}
	for (int n = 0; n < (p / 4); n++) { w += "AAAA"; }
	p %= 4;
	for (int n = 0; n < (p / 2); n++) { w += "BB"; }
	p = 0;
	if (size(s) == size(w)) { cout << w; }
	else { cout << -1; }
	return 0;
}