#include <iostream>
using namespace std;

int main() {
	int T, Count; string S; cin >> T;
	while (T--) {
		cin >> S; Count = 0;
		for (char& C : S) {
			if (C == 'D') { break; }
			Count++;
		}
		cout << Count << '\n';
	}
	return 0;
}