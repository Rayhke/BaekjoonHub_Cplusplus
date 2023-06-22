#include <iostream>
using namespace std;

int main() {
	int a[100] = {}, b = 0, N; cin >> N;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = N - 1; n > 0; n--) {
		if (a[n - 1] >= a[n]) {
			if (a[n] - 1 > 0) {
				b += a[n - 1] - a[n] + 1;
				a[n - 1] = a[n] - 1;
			}
		}
	}
	cout << b;
	return 0;
}
