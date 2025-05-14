#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int Q, A; cin >> Q;
	while (Q--) {
		cin >> A;
		cout << (A == (A & -A)) << '\n';
	}
	return 0;
}