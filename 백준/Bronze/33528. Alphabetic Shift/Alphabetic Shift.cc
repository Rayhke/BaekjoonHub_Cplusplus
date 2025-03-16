#include <iostream>
using namespace std;

int main() {
	string S; cin >> S;
	for (int n = 0; n < 26; n++) {
		cout << S << '\n';
		for (char& C : S) {
			if (--C < 'A') { C = 'Z'; }
		}
	}
	return 0;
}