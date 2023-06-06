#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		if (s[n] > 67) { s[n] = s[n] - 3; }
		else { s[n] = s[n] + 23; }
	}
	cout << s;
	return 0;
}