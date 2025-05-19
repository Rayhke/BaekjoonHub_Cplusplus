#include <iostream>
using namespace std;

bool R;
int I = -1;

bool check1(char &C) {
	return C == 'a' || C == 'e' ||
		C == 'i' || C == 'o' || C == 'u';
}

bool check2(char& C) {
	return C == 'n' || C == 's';
}

int main() {
	int Result = 1, Count = 0; string S; cin >> S;
	if (check1(S.back()) || check2(S.back())) {
		R = 1;
	}
	if (R) { Result++; }
	for (int n = S.length() - 1; n > -1; n--) {
		if (check1(S[n])) { Count++; }
		if (Count == Result) { I = n + 1; break; }
	}
	cout << I;
	return 0;
}