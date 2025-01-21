#include <iostream>
using namespace std;

int main() {
	int T, Sum[2]; string S; cin >> T;
	while (T--) {
		cin >> S; fill_n(Sum, 2, 0);
		for (char C : S) { Sum[C - 97]++; }
		cout << min(Sum[0], Sum[1]) << '\n';
	}
	return 0;
}