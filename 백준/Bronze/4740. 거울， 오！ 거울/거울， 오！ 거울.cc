#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	while (1) {
		getline(cin, S);
		if (S == "***") { break; }
		for (int index = S.length() - 1; index > -1; index--) { cout << S[index]; }
		cout << '\n';
	}
	return 0;
}