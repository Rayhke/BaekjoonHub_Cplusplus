#include <iostream>
using namespace std;

int main() {
	int a, b = 0, c = 0; string s;
	cin >> s; a = size(s);
	for (int n = 0; n < (a / 2); n++) { if (s[n] == s[(a - 1) - n]) { b++; } }
	if (b == (a / 2)) { c = 1; }
	cout << c;
	return 0;
}