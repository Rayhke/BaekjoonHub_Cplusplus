#include <iostream>
using namespace std;

int main() {
	int a[26] = {};
	string s; cin >> s;
	for (int n = 0; s[n] != '\0'; n++) { a[s[n] - 97]++; }
	for (int n = 0; n < 26; n++) { cout << a[n] << " "; }
	return 0;
}