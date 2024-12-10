#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char P; int N = 0; string S; cin >> S; P = S[0];
	for (char& C : S) {
		if (P != C) break;
		N++;
	}
	cout << N;
	return 0;
}