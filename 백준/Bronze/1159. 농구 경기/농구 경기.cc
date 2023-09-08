#include <iostream>
using namespace std;

int main() {
	bool R = 1; char C; int N, V[26] = { 0 }; string S; cin >> N;
	for (int n = 0; n < N; n++) { cin >> S; V[S[0] - 'a']++; }
	for (int n = 0; n < 26; n++) {
		if (V[n] > 4) { C = n + 97; cout << C; R = 0; }
	}
	if (R) { cout << "PREDAJA"; }
	return 0;
}