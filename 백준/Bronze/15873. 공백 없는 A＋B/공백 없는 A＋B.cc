#include <iostream>
using namespace std;

int main() {
	int A, B, Size = 0; char S[5]; cin >> S;
	for (char& C : S) {
		if (C < 48 || 57 < C) { break; }
		Size++;
	}
	if (Size < 3) {
		A = S[0] - '0'; B = S[1] - '0';
	}
	else if (Size < 4) {
		if (S[1] == '0') { A = 10; B = S[2] - '0'; }
		else { A = S[0] - '0'; B = 10; }
	}
	else { A = 10; B = 10; }
	printf("%d", A + B);
	return 0;
}