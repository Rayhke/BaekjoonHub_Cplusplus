#include <iostream>
using namespace std;

int main() {
	int N, K, m = 1;
	int a[10002] = { 0 };
	cin >> N >> K;
	for (int n = 1; n <= N; n++) {
		if ((N % n) == 0) {
			a[m] = n;
			m++;
		}
	}
	cout << a[K];
	return 0;
}