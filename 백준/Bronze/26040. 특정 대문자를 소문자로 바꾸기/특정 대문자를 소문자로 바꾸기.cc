#include <iostream>
using namespace std;

bool Arr[26];

int main() {
	ios::sync_with_stdio(false);
	char C; string S; cin >> S;
	while (1) {
		cin >> C;
		if (cin.eof()) { break; }
		Arr[C - 65] = 1;
	}
	for (char& C : S) {
		if (64 < C && C < 91) {
			C += (Arr[C - 65]) ? 32 : 0;
		}
	}
	cout << S;
	return 0;
}