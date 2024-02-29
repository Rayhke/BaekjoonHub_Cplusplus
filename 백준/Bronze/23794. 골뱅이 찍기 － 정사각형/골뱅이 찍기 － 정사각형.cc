#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 0; n < N + 2; n++) { cout << '@'; }
	cout << '\n';
	for (int n = 0; n < N; n++) {
		cout << '@';
		for (int m = 0; m < N; m++) { cout << ' '; }
		cout << "@\n";
	}
	for (int n = 0; n < N + 2; n++) { cout << '@'; }
	return 0;
}