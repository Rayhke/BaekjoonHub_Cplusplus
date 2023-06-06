#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c = 0;
	string s;
	cin >> s; a = size(s) - 1;
	for (int n = 0; s[n] != '\0'; n++) {
		if (64 < s[n] && s[n] < 71) { b = s[n] - 55; c = c + (b * pow(16, a - n)); }
		else { b = s[n] - 48; c = c + (b * pow(16, a - n)); }
	}
	cout << c;
	return 0;
}