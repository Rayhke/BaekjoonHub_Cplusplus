#include <iostream>
#include <string>
using namespace std;

int main() {
	string S, Result = "unrated"; getline(cin, S);
	for (int n = 0; n < S.length() - 1; n++) {
		if (S[n] == 68 || S[n] == 100) {
			if (S[n + 1] == 50) { Result = "D2"; break; }
		}
	}
	cout << Result;
	return 0;
}