#include <iostream>
using namespace std;

bool Use[26];

int main() {
	string S, T; cin >> S >> T;
	for (char& C : S) { Use[C - 97] = 1; }
	for (char& C : T) {
		if (Use[C - 97]) { continue; }
		cout << C;
	}
	return 0;
}