#include <iostream>
using namespace std;

int main() {
	bool v[5] = { 0 }, w = 0; string s;
	for (int n = 0; n < 5; n++) {
		cin >> s;
		for (int m = 0; m < s.size() - 2; m++) {
			if (s[m] == 'F') {
				if (s[m + 1] == 'B' && s[m + 2] == 'I') { v[n] = 1; w = 1; }
			}
		}
	}
	if (w) {
		for (int n = 0; n < 5; n++) {
			if (v[n]) { cout << n + 1 << ' '; }
		}
	}
	else { cout << "HE GOT AWAY!"; }
	return 0;
}
