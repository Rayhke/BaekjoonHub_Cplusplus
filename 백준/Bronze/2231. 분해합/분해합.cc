#include <iostream>
#include <string>
using namespace std;

int s(int b) {
	int c; string s = to_string(b);
	for (int n = 0; s[n] != '\0'; n++) {
		c = s[n] - 48;
		if (c != 0) { b = b + c; }
	}
	return b;
}

int main() {
	int a, b = 0, c = 0;
	cin >> a;
	while (1) { b = b + 1; if (b == a) { break; } else if (a == s(b)) { c = 1; break; } }
	if (c == 1) { cout << b; }
	else { cout << c; }
	return 0;
}