#include <iostream>
using namespace std;

int main() {
	char C = ' '; int P = 0; string S; cin >> S;
	for (char& T : S) {
		if (C != T) { C = T; P += 10; }
		else { P += 5; }
	}
	cout << P;
	return 0;
}