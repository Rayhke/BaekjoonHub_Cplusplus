#include <iostream>
using namespace std;

int main() {
	int N = 0; string S; cin >> S;
	for (char C : S) {
		if (C == 97 || C == 101 || C == 105 || C == 111 || C == 117) { N++; }
	}
	cout << N;
	return 0;
}