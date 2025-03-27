#include <iostream>
#include <string>
using namespace std;

int Use[26];

int main() {
	char P; string S;
	Use[4] = 4; Use[8] = -4;
	while (getline(cin, S)) {
		for (char& C : S) {
			if (C == 32) { P = C; }
			else { P = C + Use[C - (C < 97 ? 65 : 97)]; }
			cout << P;
		}
		cout << '\n';
	}
	return 0;
}