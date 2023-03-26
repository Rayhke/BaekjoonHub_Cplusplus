#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t, r;
	char s[21] = { 0 };
	string a;
	cin >> t;
	for (int n = 0; n < t;) {
		cin >> r >> s;
		for (int m = 0; m < strlen(s); m++) {
			for (int l = 0; l < r; l++) {
				a += s[m];
			}
		}
		n++;
		if (n < t) {
			a += '\n';
		}
	}
	cout << a;
	return 0;
}