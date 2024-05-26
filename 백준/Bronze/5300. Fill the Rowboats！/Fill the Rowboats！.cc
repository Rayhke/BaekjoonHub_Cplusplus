#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 1; n <= N; n++) {
		cout << n << ' ';
		if (n % 6 == 0) { cout << "Go! "; }
	}
	if (N % 6 != 0) { cout << "Go!"; }
	return 0;
}