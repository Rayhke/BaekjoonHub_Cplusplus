#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
	int T, N; cin >> T;
	while (T--) {
		cin >> N;
		for (int n = 0; n < N / 5; n++) { cout << "++++ "; }
		for (int n = 0; n < N % 5; n++) { cout << '|'; }
		cout << '\n';
	}
	return 0;
}