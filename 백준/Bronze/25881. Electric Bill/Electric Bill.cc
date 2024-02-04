#include <iostream>
using namespace std;

int main() {
	int bef, aft, N, M, L; cin >> bef >> aft >> N;
	while (N--) {
		cin >> M;
		if (M < 1001) { L = M * bef; }
		else { L = 1000 * bef + (M - 1000) * aft; }
		cout << M << ' ' << L << '\n';
	}
	return 0;
}