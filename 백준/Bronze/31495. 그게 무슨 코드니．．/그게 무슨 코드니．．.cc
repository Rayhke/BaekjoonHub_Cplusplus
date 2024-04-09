#include <iostream>
#include <string>
using namespace std;

int main() {
	int start, end, count = 0; string S; getline(cin, S);
	for (int n = 0; n < S.length(); n++) {
		if (S[n] == '"') {
			if (count == 0) { start = n; count++; }
			else { end = n; count++; }
		}
	}
	if (count < 2) { cout << "CE"; }
	else if (start != 0 || end != S.length() - 1) { cout << "CE"; }
	else {
		S = S.substr(start + 1, end - 1);
		if (S == "") { cout << "CE"; }
		else { cout << S; }
	}
	return 0;
}