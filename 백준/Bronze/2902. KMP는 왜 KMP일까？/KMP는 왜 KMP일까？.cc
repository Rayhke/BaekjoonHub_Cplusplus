#include <iostream>
using namespace std;

int main() {
	string s, p = ""; cin >> s;
	for (int n = 0; n < s.length(); n++) {
		if (s[n] < 65 || 90 < s[n]) { continue; }
		p += s[n];
	}
	cout << p;
	return 0;
}