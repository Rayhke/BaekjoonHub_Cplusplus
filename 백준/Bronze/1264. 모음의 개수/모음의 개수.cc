#include <iostream>
#include <string>
using namespace std;

int main() {
	int p = 0; string s;
	while (1) {
		getline(cin, s); if (s == "#") { break; }
		for (int n = 0; n < size(s); n++) {
			if (s[n] == 'a' || s[n] == 'A' || s[n] == 'e' || s[n] == 'E' || s[n] == 'i' || s[n] == 'I' || s[n] == 'o' || s[n] == 'O' || s[n] == 'u' || s[n] == 'U') { p++; }
		}
		cout << p << '\n'; p = 0;
	}
	return 0;
}