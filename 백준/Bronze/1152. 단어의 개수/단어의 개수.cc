#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0; string s;
	getline(cin, s);
	if (s[0] != ' ') { a++; }
	for (int n = 0; n < size(s); n++) { if (s[n] == ' ') { if (s[n + 1] != '\0') { a++; } } }
	cout << a;
	return 0;
}