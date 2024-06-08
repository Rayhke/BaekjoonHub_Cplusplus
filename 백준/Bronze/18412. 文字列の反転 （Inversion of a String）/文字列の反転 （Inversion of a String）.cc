#include <iostream>
using namespace std;

int main() {
	char S[201]; int N, A, B; cin >> N >> A >> B >> S;
	if (A == B) { cout << S; return 0; }
	A--; B--;
	for (int n = 0; n < N; n++) {
		if (A <= n && n <= B) { cout << S[A + B - n]; }
		else { cout << S[n]; }
	}
	return 0;
}