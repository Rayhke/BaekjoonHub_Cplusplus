#include <iostream>
using namespace std;

bool A[26];

int main() {
	int N; char C; string S; cin >> N;
	while (N--) {
		cin >> S; A[S[0] - 97] = 1;
	}
	for (int n = 1; n <= 26; n++) {
		C = n + 96;
		cout << (A[n - 1] ? C : '.') << (n % 6 == 0 ? "\n" : "");
	}
	return 0;
}