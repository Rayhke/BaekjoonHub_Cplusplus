#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int T, N; cin >> T;
	while (T--) {
		cin >> N;
		cout << (!((N + 1) % (N % 100)) ? "Good" : "Bye") << '\n';
	}
	return 0;
}