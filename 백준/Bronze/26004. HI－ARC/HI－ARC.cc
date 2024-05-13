#include <iostream>
using namespace std;

int N, Arr[26];

int main() {
	ios::sync_with_stdio(false);
	string S; cin >> N >> S; N = 1e9;
	for (char C : S) { Arr[C - 65]++; }
	for (int n = 0; n < 26; n++) {
		if (n == 0 || n == 2 || n == 7 || n == 8 || n == 17) {
			N = min(Arr[n], N);
		}
	}
	cout << N;
	return 0;
}