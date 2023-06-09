#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0;
	string s;
	while (getline(cin, s)) { if (s == "gum gum for jay jay")a = a + 1; }
	cout << a;
	return 0;
}