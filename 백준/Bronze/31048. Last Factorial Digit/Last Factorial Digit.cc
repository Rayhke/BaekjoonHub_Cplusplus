#include <iostream>
using namespace std;

int main() {
	int T, N, Sum; cin >> T;
	while (T--) {
		cin >> N; Sum = 1;
		for (int n = 1; n <= N; n++) { Sum *= n; }
		cout << Sum % 10 << '\n';
	}
	return 0;
}