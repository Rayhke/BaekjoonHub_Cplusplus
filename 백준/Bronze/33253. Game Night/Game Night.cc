#include <iostream>
using namespace std;

int Use[26];

int main() {
	ios::sync_with_stdio(false);
	int N, Count = 0; string S, P; cin >> N >> S >> P;
	for (char C : S) { Use[C - 97]++; }
	for (char C : P) {
		if (!Use[C - 97]) { Count++; }
		else { Use[C - 97]--; }
	}
	cout << Count;
	return 0;
}