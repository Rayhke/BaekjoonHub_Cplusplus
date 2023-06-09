#include <iostream>
using namespace std;

int main() {
	int a, b = 0, c = 0;
	string s; cin >> s; a = s[0];
	if (s[0] != 49) { b = b + 1; }
	else { c = c + 1; }
	for (int n = 1; s[n] != '\0'; n++) {
		if (a == s[n]) { continue; }
		else if (a != s[n]) {
			a = s[n];
			if (a != 49) { b = b + 1; }
			else { c = c + 1; }
		}
	}
	if (b < c) { cout << b; }
	else { cout << c; }
	return 0;
}