#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	bool r = 1; char c, d; int R[26] = {}, P = 0; string s, p = "";
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) { R[s[n] - 65]++; }
	if (size(s) & 1) {
		for (int n = 0; n < 26; n++) {
			if (R[n] & 1) { P++; d = n + 65; }
			if (P > 1) { r = 0; break; }
		}
	}
	else {
		for (int n = 0; n < 26; n++) {
			if (R[n] & 1) { r = 0; break; }
		}
	}
	if (r) {
		for (int n = 0; n < 26; n++) {
			if (R[n] != 0) {
				for (int m = 0; m < R[n] / 2; m++) {
					c = n + 65; cout << c;
					p += c;
				}
			}
		}
		if (P == 1) { cout << d; }
		reverse(p.begin(), p.end());
		cout << p;
	}
	else { cout << "I'm Sorry Hansoo"; }
	return 0;
}