#include <iostream>
using namespace std;

int main() {
	int N = 0, M = 0; string S; cin >> S;
	for (const char& C : S) {
		if (C == 58) { N++; }
		else if (C == 95) { M++; }
	}
	cout << S.length() + N + (M * 5);
	return 0;
}