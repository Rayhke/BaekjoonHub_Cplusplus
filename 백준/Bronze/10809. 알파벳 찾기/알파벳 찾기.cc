#include <iostream>
using namespace std;

int main() {
	char a[101] = {}, s[] = "abcdefghijklmnopqrstuvwxyz";
	int b[26] = {}, c = 0;
	cin >> a;
	for (int n = 0; n < 26; n++) { b[n] = -1; }
	for (int n = 0; a[n] != '\0'; n++) {
			if ('a' <= a[n] && a[n] <= 'z') {
				c = a[n] - 'a';
				if (b[c] != -1) { continue; }
				if (a[n] == s[c]) { b[c] = n; }
			}
	}
	for (int n = 0; n < 26; n++) { cout << b[n] << " "; }
	return 0;
}