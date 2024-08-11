#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 1; n < N; n++) { cout << ' '; }
	cout << "*\n"; N--;
	for (int n = 0; n < N; n++) {
		for (int m = 1; m < N - n; m++) { cout << ' '; }
		cout << '*';
		for (int m = 0; m < n * 2 + 1; m++) { cout << ' '; }
		cout << "*\n";
	}
	return 0;
}