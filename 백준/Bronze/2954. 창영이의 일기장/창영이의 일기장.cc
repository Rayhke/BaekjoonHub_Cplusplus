#include <iostream>
#include <string>
using namespace std;

char V[] = {'a', 'e', 'i', 'o', 'u'};

int main() {
	bool R; string S, P = ""; getline(cin, S);
	for (int n = 0; n < S.length(); n++) {
		R = 0;
		for (char& v : V) {
			if (S[n] == v) { R = 1; break; }
		}
		n += (R) ? 2 : 0;
		P += S[n];
	}
	cout << P;
	return 0;
}