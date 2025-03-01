#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M = 0, A, B; cin >> N;
	while (N--) {
		cin >> A >> B;
		if (A != B) { M += A - B; }
		cout << M << '\n';
	}
	return 0;
}