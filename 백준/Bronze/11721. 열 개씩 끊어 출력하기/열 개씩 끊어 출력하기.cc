#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		cout << s[n];
		if (((n + 1) % 10) == 0) { cout << '\n'; }
	}
	return 0;
}