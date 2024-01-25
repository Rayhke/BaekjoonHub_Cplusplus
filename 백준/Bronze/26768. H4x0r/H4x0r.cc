#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s; cin >> s;
	for (char &c : s) {
		if (c == 97) { c = 52; }
		else if (c == 101) { c = 51; }
		else if (c == 105) { c = 49; }
		else if (c == 111) { c = 48; }
		else if (c == 115) { c = 53; }
	}
	cout << s;
	return 0;
}