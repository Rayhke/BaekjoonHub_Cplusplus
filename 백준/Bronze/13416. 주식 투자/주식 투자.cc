#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int T, N, A, B, C, P; cin >> T;
	while (T--) {
		cin >> N; P = 0;
		while (N--) {
			cin >> A >> B >> C;
			P += max(max(0, A), max(B, C));
		}
		cout << P << '\n';
	}
	return 0;
}