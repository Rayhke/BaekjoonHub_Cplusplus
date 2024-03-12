#include <iostream>
using namespace std;

int main() {
	char C; int N; string S; cin >> N;
	while (N--) {
		cin >> S; C = ' ';
		for (char other : S) {
			if (C == other) { continue; }
			cout << other; C = other;
		}
		cout << '\n';
	}
	return 0;
}